#include "WiFi.h"
#include <esp_now.h>
#include <WiFi.h>

//pin where LDR is connected
//put later

//mac address of reciever esp
uint8_t receiverMacAddress[] = {0xfc,0xb4,0x67,0x4f,0x01,0x3c};

// Structure example to send data
// Must match the receiver structure
typedef struct struct_message {
    int Text;
} struct_message;

struct_message myData;

void setup(){
	Serial.begin(115200);


  // Set device as a Wi-Fi Station
	WiFi.mode(WIFI_MODE_STA);
	Serial.println(WiFi.macAddress());

  //init esp-now
  if (esp_now_init() != ESP_OK) {
    Serial.println("Error initializing ESP-NOW");
    return;
  }

  // Register peer
  esp_now_peer_info_t peerInfo;
  memset(&peerInfo, 0, sizeof(peerInfo));
  memcpy(peerInfo.peer_addr, receiverMacAddress, 6);
  peerInfo.channel = 0;  
  peerInfo.encrypt = false;

  // Add peer        
  if (esp_now_add_peer(&peerInfo) != ESP_OK){
    Serial.println("Failed to add peer");
    return;
  }

}
void loop(){

  int Text = 98;
  delay(10);
  myData.Text = Text;
  Serial.println(myData.Text);


  // Send message via ESP-NOW
  esp_err_t result = esp_now_send(receiverMacAddress, (uint8_t *) &myData, sizeof(myData));
   
  if (result == ESP_OK) {
    Serial.println("Sent with success");
  } else {
    Serial.println("Error sending the data");
  }

  // Wait for a second before sending the next data
  delay(1000);
}