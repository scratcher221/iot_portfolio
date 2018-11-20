import org.eclipse.paho.client.mqttv3.*;
import org.eclipse.paho.client.mqttv3.persist.MemoryPersistence;

import java.util.Date;

public class MySwitch {

    public static void main(String[] args) throws InterruptedException {
        String broker       = "tcp://192.168.12.1:1883";
        String clientId     = "SwitchClient";
        MemoryPersistence persistence = new MemoryPersistence();

        try {
            MqttClient sampleClient = new MqttClient(broker, clientId, persistence);
            MqttConnectOptions connOpts = new MqttConnectOptions();
            connOpts.setCleanSession(true);
            System.out.println("Connecting to broker: "+broker);
            sampleClient.connect(connOpts);
            System.out.println("Connected");

            sampleClient.subscribe("/switch", new IMqttMessageListener() {
                @Override
                public void messageArrived(String s, MqttMessage mqttMessage) throws Exception {
                    String stringMsg = new String(mqttMessage.getPayload()).toLowerCase();
                    if(stringMsg.equals("on")){
                        System.out.println("Switch turned ON");
                    }else if(stringMsg.equals("off")){
                        System.out.println("Switch turned OFF");
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
