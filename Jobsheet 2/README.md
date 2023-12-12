# JOBSHEET 2 - PROTOKOL KOMUNIKASI DAN SENSOR

## Abstrak
<p align="justify">Praktikum Protokol Komunikikasi dan Sensor ini bertujuan untuk memperkenalkan mahasiswa pada konsep dasar protokol komunikasi dan penggunaan sensor dengan menggunakan mikrokontroler ESP32. ESP32 merupakan salah satu jenis mikrokontroler yang memiliki kemampuan WiFi dan Bluetooth yang dapat digunakan untuk berbagai proyek Internet of Things (IoT). Praktikum ini akan membahas konsep dasar protokol komunikasi seperti Serial Communication, I2C, SPI, serta penerapannya dalam penggunaan sensor. Pada tahap awal praktikum, mahasiswa akan diperkenalkan dengan ESP32 dan lingkungan pengembangan perangkat lunak (IDE) yang umum digunakan untuk memprogram ESP32, seperti Arduino IDE atau PlatformIO. Setelah memahami dasar-dasar pemrograman ESP32, mahasiswa akan belajar tentang berbagai protokol komunikasi yang umum digunakan dalam mikrokontroler. Setelah memahami konsep dasar komunikasi, mahasiswa akan diperkenalkan dengan penggunaan sensor pada ESP32. Mereka akan belajar tentang berbagai jenis sensor seperti sensor suhu, sensor kelembaban, sensor gerak, atau sensor jarak dan bagaimana mengintegrasikan sensor-sensor tersebut dengan ESP32. Selanjutnya, mahasiswa akan diberikan praktikum untuk mengimplementasikan pengetahuan yang didapat dengan membuat proyek sederhana menggunakan ESP32, seperti membaca data dari sensor suhu dan menampilkan informasi tersebut melalui koneksi serial atau mengirim data sensor ke server menggunakan koneksi WiFi.</p>

<p align="justify">Jobsheet ini bertujuan untuk memahami cara kerja protokol komunikasi yang terdapat pada ESP32, seperti UART, I2C, OneWire, SPI, menggunakan protokol komunikasi data seperti UART, I2C, OneWire, dan SPI untuk mengakses sensordsan diharapkan dapat memanfaatkan transducer sensor dan actuator untuk membuat sebuah perangkat IoT..</p>

**Sub-job** pada jobsheet ini, antara lain:
1. ESP32 Capacitive Touch Sensor
2. Mengakses Sensor DHT 11 (Single Wire / BUS)
3. Mengakses Sensor RFID (SPI Communication)

## Alat dan Bahan
**Alat dan Bahan** yang digunakan dalam praktikum ini, antara lain:
1) ESP32
2) Breadboard
3) Kabel jumper
4) Sensor DHT11, RFID
5) LED (5) dan Push Button (3)
6) Servo
7) Resistor 330,1K, 10K Ohm (@ 3)

# A. ESP32 Capasitive Touch Sensor  

## 1. Cek Touch

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/JeffriPS/Embedded/blob/main/Jobsheet%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/1.%20ESP32%20TOUCH%20TEST/Percobaan1_Step2.ino">disini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah apabila ujung jumper disentuh maka grafik kapasitansi akan naik.

https://github.com/JeffriPS/Embedded/assets/94127988/ee99970b-f3a2-409d-80fc-b23c33e29dee

## 2. LED menyala ketika sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="https://github.com/JeffriPS/Embedded/blob/main/Jobsheet%202/A.%20ESP32%20Capacitive%20Touch%20Sensor/2.%20LED%20nyala%20ketika%20disentuh%20mati%20ketika%20tidak%20disentuh/percobaan2_step6.ino">di sini</a>

### c. Hasil dan Pembahasan
Output pada percobaan ini adalah LED akan menyala ketika sensor disentuh, dan LED akan mati ketika sensor tidak disentuh.

https://github.com/JeffriPS/Embedded/assets/94127988/0e7375a1-2426-4bb4-b258-e30ced4775bf

## 3. LED menyala blink ketika sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">

### b. Source Code
Kode program dapat dilihat <a href="3.%20ketika%20sensor%20disentuh%2C%20LED%20menyala%20Blink/Capacitive_Touch_Sensor_3/Capacitive_Touch_Sensor_3.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika sensor disentuh, LED menyala Blink. Dengan program seperti diatas namun diberi tambahan `digitalWrite(led, LOW)` dan `delay(500)` sehingga program akan mempengaruhi pin LED HIGH dan LOW secara looping terus menerus. Jika nilai kapasitansi kurang dari 20 (sentuhan terdeteksi), LED pada pin 16 akan berkedip dengan interval 500 ms on dan 500 ms off. Jika nilai kapasitansi lebih besar atau sama dengan 20 (tidak ada sentuhan terdeteksi), LED dimatikan.

https://github.com/JeffriPS/Embedded/assets/94127988/6443ce83-28ff-4cb4-a3b3-697d856f3f06

## 4. Angka yang akan bertambah setiap kali sensor disentuh

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

<img width="350px" src="https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/6b5b090a-8ef3-4759-aeb3-52d7d428f237">


### b. Source Code
Kode program dapat dilihat <a href="4.%20angka%20yang%20akan%20bertambah%20setiap%20kali%20sensor%20disentuh/Capacitive_Touch_Sensor_4/Capacitive_Touch_Sensor_4.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika LED menyala, maka pada Serial Monitor akan menampilkan angka yang akan bertambah setiap kali sensor disentuh

https://github.com/JeffriPS/Embedded/assets/94127988/e66042e3-b185-42f2-b755-79b04653be3e

## 5. LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="5.%20LED%20tersebut%20adalah%20bergerak%20dari%20kiri%20ke%20kanan%2C%20kemudian%20kanan%20ke%20kiri/Capacitive_Touch_Sensor_5/Capacitive_Touch_Sensor_5.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah terdapat 3 LED ketika sensor disentuh, LED menyala menjadi running LED. Nyala running LED tersebut adalah bergerak dari kiri ke kanan, kemudian kanan ke kiri secara kontinyu. Menggunakan program dimana Program akan membuka komunikasi serial dan mencetak pesan "ESP32 Touch Test". Di dalam loop utama, nilai kapasitansi sensor sentuh pada pin T0 (GPIO 4) terus-menerus dibaca. Jika nilai kapasitansi kurang dari 20 (sentuhan terdeteksi), tiga LED (led, led2, led3) akan dinyalakan secara berurutan dengan interval 500 ms on dan 500 ms off. Jika tidak ada sentuhan terdeteksi, semua LED dimatikan. Nilai hitungan dicetak ke serial monitor.

https://github.com/JeffriPS/Embedded/assets/94127988/d0e9bfad-00c2-4c36-b520-c0f189d0c6c3

# B. Mengakses Sensor DHT 11 (Single Wire / BUS)

## 1. Cek Sensor DHT11

### a. Rangkaian 
Rangkaian pada percobaan ini adalah sebagai berikut

<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/cca91488-7ed5-4895-8eec-67d8496790c8">

### b. Source Code
Kode program dapat dilihat <a href="1.%20rangkaian/dht11_1/dht11_1.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika mengecek sensor DHT11. Jika sensor berfungsi dengan baik, maka serial monitor akan menampilkan hasil pembacaan suhu dan kelembaban oleh sensor DHT11.

https://github.com/JeffriPS/Embedded/assets/94127988/b8be5f06-1c60-4c92-b84a-7538f695eac0

## 2. Tugas

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut

![board-2](https://github.com/farhanhisyam/sistemEmbedded/assets/94108385/14779bf1-007e-428e-b901-ab4477c5802c)


### b. Source Code
Kode program dapat dilihat <a href="2.%20tugas/dht11_tugas/dht11_tugas.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari tugas ini adalah apabila sensor mendeteksi suhu yang naik maka suhu pada serial monitor juga akan naik.
Ketika suhu rungan mencapai 30 derajat celcius, maka ESP32 akan menyalakan LED Merah dan buzzer.

https://github.com/JeffriPS/Embedded/assets/94127988/2f1ea066-960d-49fa-b76e-4114f4cd063d

# C. Mengakses Sensor RFID (SPI Communication)

## 1. Cek RFID

### a. Rangkaian 
<img alt="image" src="https://github.com/delimaayup/jobsheetEmbedded/assets/151798889/74a26b36-91ab-4a93-8a4d-af319da6e011">

### b. Source Code
Kode program dapat dilihat <a href="1.%20rangkaian/rfid_rangkaian/rfid_rangkaian.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika RFID Card didekatkan pada RFID Reader maka akan muncul code deteksi RFID Card di serial monitor

https://github.com/JeffriPS/Embedded/assets/94127988/9e22e002-c2db-40ea-8959-3f9c5f3918f0

## 2. Tugas

### a. Rangkaian
Rangkaian pada percobaan ini adalah sebagai berikut



### b. Source Code
Kode program dapat dilihat <a href="1.%20rangkaian/rfid_rangkaian/rfid_rangkaian.ino">di sini</a>

### c. Hasil dan Pembahasan
Hasil dari percobaan ini adalah ketika tag RFID didekatkan pada Reader, maka LED Hijau akan menyala, servo akan bergerak ke kanan (lalu kembali ke posisi semula setelah 3 detik) dan di Serial Monitor akan tertampil pesan “Akses Diterima, Silahkan Masuk”. Apabila Tag RFID tidak dikenali, maka LED Merah akan menyala, servo tidak bergerak dan di Serial Monitor akan tertampil pesan “Akses Ditolak”. 

https://github.com/JeffriPS/Embedded/assets/94127988/235eb796-e0c3-4ba8-af1e-4e5dd657b0fa



