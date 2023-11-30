# JOBSHEET 1 - DASAR PEMROGRAMAN ESP32 UNTUK PEMROSESAN DATA INPUT/OUTPUT ANALOG DAN DIGITAL

## Abstrak
<p align="justify">ESP-32 adalah mikrokontroler yang dikenalkan oleh Espressif System merupakan penerus dari mikrokontroler ESP8266. Pada mikrokontroler ini sudah
tersedia modul WiFi dalam chip sehingga sangat mendukung untuk membuat sistem aplikasi Internet of Things. Perbedaan antara ESP32 dengan ESP8266
adalah pada bagian prosesornya. ESP32 sudah Dual-Core 32 bit, jelas lebih cepat ESP32 secara kinerja. Selain itu modul ini juga mempunyai bluetooth, satu fitur
yang tidak ada di ESP8266.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami dan mengoperasikan GPIO pada ESP32, memahami dan melakukan pengolahan data untuk input/output analog dan digital, dan melakukan optimalisasi pembacaan sensor analog menggunakan metode regresi linear.</p>

**Sub-job** pada jobsheet ini, antara lain:
1. GPIO
2. PWM
3. ADC dan DAC
4. Regresi Linier

## Alat dan Bahan
**Alat dan bahan** yang digunakan dalam jobsheet ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Potensiometer 10k Ohm (1)
5) LED (5) dan Push Button (3)
6) Resistor 330,1K, 10K Ohm (@3)
7) Sensor Capacitive Soil Moisture
8) Three-Way Meter

## Instalasi

1. Susun komponen sesuai dengan rangkaian
2. Buka Arduino IDE dan instal ESP32
    - Masuk ke **Preferences**
    - Isikan board url dengan link : https://dl.espressif.com/dl/package_esp32_index.json dan simpan
    - Buka **Tools** > **Board** > **Boards Manager**
    - Cari ESP32, by Espressif. Kemudian instal
    - Pilih flash mode DIO/QIU menyesuaikan
3. Jalankan program .ino
4. Jika terdapat error saat uploading, tekan dan tahan tombol _Boot_ pada ESP32 saat upload, hingga _Connecting_ selesai

## Project 1 - GPIO

### Rangkaian

1. Led menyala saat button ditekan

<img src="" width="480px">

2. Led menyala dan _blink_ saat button ditekan

<img src="" width="480px">

3. Led menyala, _blink_, dan berjalan saat button ditekan

<img src="" width="480px">

### Keluaran

1. Led menyala saat button ditekan

![App Screenshot](https://cdn.discordapp.com/attachments/1179606611476611213/1179606791592607774/Led-menyala-saat-button-ditekan.gif)

2. Led menyala dan _blink_ saat button ditekan

![App Screenshot](https://cdn.discordapp.com/attachments/1043462519336996894/1043463436551589908/GPIO2.gif)

3. Led menyala, _blink_, dan berjalan saat button ditekan

![App Screenshot](https://cdn.discordapp.com/attachments/1043462519336996894/1043463436195078155/GPIO3.gif)
