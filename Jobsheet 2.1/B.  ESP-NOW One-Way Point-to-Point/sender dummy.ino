#include <esp_now.h>
#include <WiFi.h>
// Ganti dengan Mac Address ESP32 Receiver
uint8_t broadcastAddress[] = {0xC8, 0xF0, 0x9E, 0x4E, 0x1D, 0x5C}; 
// Struktur pesan sender dan receiver harus sama
typedef struct struct_message {
 char a[];
 int b;
 float c;
 bool d;
} struct_message;
// Driver untuk struktur pesan
struct_message myData;
esp_now_peer_info_t peerInfo;
// fungsi callback
void OnDataSent(const uint8_t *mac_addr, esp_now_send_status_t status) {
 Serial.print("\r\nStatus Paket Terakhir :\t");
 Serial.println(status == ESP_NOW_SEND_SUCCESS ? "Sukses Terkirim" : "Gagal Terkirim");
}
void setup() {
 // Init Serial Monitor
 Serial.begin(115200);
 // Set ESP32 sebagai station
 WiFi.mode(WIFI_STA);
 // Init ESP-NOW
 if (esp_now_init() != ESP_OK) {
 Serial.println("Gagal menginisialisasi ESP-NOW");
 return;
 }
 // Fungsi akses register cb untuk perintah mengirim data
 esp_now_register_send_cb(OnDataSent);
 
 // Register peer
 memcpy(peerInfo.peer_addr, broadcastAddress, 6);
 peerInfo.channel = 0; 
 peerInfo.encrypt = false;
 
 // Add peer 
 if (esp_now_add_peer(&peerInfo) != ESP_OK){
 Serial.println("Gagal menambahkan peer");
 return;
 }
}
void loop() {
 // Set values to send
 strcpy(myData.a, "INI ADALAH CHAR");
 myData.b = random(1,20);
 myData.c = 1.2;
 myData.d = false;
 
 // Send message via ESP-NOW
 esp_err_t result = esp_now_send(broadcastAddress, (uint8_t *) &myData,
sizeof(myData));
 
 if (result == ESP_OK) {
 Serial.println("Data berhasil terkirim");
 }
 else {
 Serial.println("Gagal mengirim data");
 }
 delay(2000);
}
