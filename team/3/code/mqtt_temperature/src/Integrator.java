import org.eclipse.paho.client.mqttv3.*;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;

public class Integrator {

    public static void main(String[] args) throws InterruptedException {
        String broker       = "tcp://192.168.12.1:1883";
        String clientId     = "IntegratorClient";
        MemoryPersistence persistence = new MemoryPersistence();

        try {

            MqttClient sampleClient = new MqttClient(broker, clientId, persistence);
            MqttConnectOptions connOpts = new MqttConnectOptions();
            connOpts.setCleanSession(true);
            System.out.println("Connecting to broker: "+broker);
            sampleClient.connect(connOpts);
            System.out.println("Connected");

            sampleClient.subscribe("/temperature", new IMqttMessageListener() {
                @Override
                public void messageArrived(String s, MqttMessage mqttMessage) throws Exception {
                    String stringMsg = new String(mqttMessage.getPayload()).toLowerCase();
                    Double temperature = new Double(stringMsg);
                    System.out.println("Temperature is "+temperature);

                    if(temperature > 20){
                        //turn on switch
                        MqttMessage message = new MqttMessage("ON".getBytes());
                        message.setQos(1);
                        sampleClient.publish("/switch", message);
                        System.out.println("Switch turned on cause Temperature was too high");
                    }
                }
            });

            while(true);
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
