import org.eclipse.paho.client.mqttv3.MqttClient;
import org.eclipse.paho.client.mqttv3.MqttConnectOptions;
import org.eclipse.paho.client.mqttv3.MqttException;
import org.eclipse.paho.client.mqttv3.MqttMessage;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;

import java.util.Date;

public class Temperature {
    static double startTemp= 18;
    static double endTemp= 25;
    static int timeToRiseInSeconds = 60;

    public static void main(String[] args) throws InterruptedException {
        String topic        = "/temperature";
        String content      = startTemp + "";
        int qos             = 2;
        String broker       = "tcp://192.168.12.1:1883";
        String clientId     = "TemperatureClient";
        MemoryPersistence persistence = new MemoryPersistence();

        try {

            MqttClient sampleClient = new MqttClient(broker, clientId, persistence);
            MqttConnectOptions connOpts = new MqttConnectOptions();
            connOpts.setCleanSession(true);
            System.out.println("Connecting to broker: "+broker);
            sampleClient.connect(connOpts);
            System.out.println("Connected");

            int timeCount = 1;
            double startTime = new Date().getTime();
            while(timeCount <= timeToRiseInSeconds){

                double deltaTime = new Date().getTime() - startTime;
                double percentage = (((double)deltaTime/1000) / timeToRiseInSeconds)*100;
                double deltaValue = (endTemp-startTemp)*(percentage/100);



                content = ""+(startTemp+deltaValue);
                System.out.println("Publishing message: "+content);
                MqttMessage message = new MqttMessage(content.getBytes());
                message.setQos(qos);
                sampleClient.publish(topic, message);
                System.out.println("Message published");

                timeCount++;
                Thread.sleep(1000);
            }



            sampleClient.disconnect();
            System.out.println("Disconnected");
            System.exit(0);
        } catch(MqttException me) {
            System.out.println("reason "+me.getReasonCode());
            System.out.println("msg "+me.getMessage());
            System.out.println("loc "+me.getLocalizedMessage());
            System.out.println("cause "+me.getCause());
            System.out.println("excep "+me);
            me.printStackTrace();
        }
    }
}
