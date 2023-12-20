# JOBSHEET 4 - TRANSMISI DATA MENGGUNAKAN PROTOKOL HTTP DAN MQTT

## Abstrak
<p align="justify">Hypertext Transfer Protocol (HTTP) adalah sebuah protokol jaringan lapisan
aplikasi yang digunakan untuk sistem informasi terdistribusi, kolaboratif, dan
menggunakan hypermedia. Protokol tersebut sering diimplementasikan untuk
melayani permintaan data dari user dan untuk manajemen website. Sementara itu,
Message Queuing Telemetry Trasnsport (MQTT) adalah protokol komunikasi
yang berjalan di atas stack TCP/IP, didesain untuk komunikasi Machine-to-
Machine (M2M), bersifat open sources dan lightweight, mempunyai protocol
overhead yang rendah (minimum 2 bytes) sehingga berefek pada konsumsi daya
yang kecil dan mampu bekerja pada latency yang tinggi serta bandwidth yang
kecil, sehingga protokol ini sering dimanfaatkan untuk transmisi data dari Node
Sensor menuju Server.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami cara kerja protokol HTTP dan MQTT untuk
transmisi data (akuisisi data dan kendali) pada Platform IoT Node-Red serta merancang dan melakukan konfigurasi pada perangkat
Internet of Things (IoT) menggunakan protokol HTTP dan MQTT untuk
monitoring dan kendali melalui Platform IoT Node-Red.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. Setting SSID dan Password Wi-Fi ESP32 melalui Web Server
2. Transmisi Data Menggunakan Protokol HTTP
3. Transmisi Data Menggunakan Protokol MQTT
4. Akuisi Data dan Kendali Perangkat IoT Menggunakan Protokol MQTT
5. Pertanyaan dan Tugas

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1. ESP32 dan Server Node-Red
2. Breadboard
3. Kabel jumper
4. Sensor DHT 11
5. LED (5)
6. Resistor 330, 1K, 10K Ohm (3)

# A. Setting SSID dan Password Wi-Fi ESP32 melalui Web Server

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![job3a](https://github.com/iamanisaamalia/sistemembedded/assets/147674408/a37af924-187d-41d9-8d78-a6316d5a189b)


### b. Source Code
Kode program dapat dilihat <a href="https://github.com/JeffriPS/Embedded/blob/main/Jobsheet%204/4A_Setting_SSID_password_melalui_web_server/JOB_4_A.ino">di sini</a>

### c. Hasil 

https://github.com/JeffriPS/Embedded/assets/94127988/b49e8854-51df-43a1-bffc-d589732b421f
