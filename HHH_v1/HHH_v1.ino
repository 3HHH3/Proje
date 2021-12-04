/*
 * Yemekhanede HGS Otomosyonu
 * 
 * Hasan Hüseyin HARMANCI
 * Mekatronik Programı 2 Sınıf 
 * 205510025
 
 * 11.11.2021
 
 * Kontrol Sistemleri,
 * Sistem Analizi ve Tasarımı-I,
 * Endüstriyel Robotlar
 * 
 
  1.)Dosya> Tercihler> Ek Devre Kartları Yöneticisi URL'leri> http://arduino.esp8266.com/stable/package_esp8266com_index.json linkini yapıştırıyoruz ve tamam diyoruz
  
  2.)Araç> Kart> Kart Yöneticisi> esp8266 2.4.1
  
  3.)Aşağıda gerekli kütüphanelerimizin linkleri bulunmaktadır bu linktekileri indirdikten sonnra Taslak> library ekle> .ZIP Kitaplığı Ekle> indirdiğin Zip dosyanını seç
  https://github.com/FirebaseExtended/firebase-arduino
  https://github.com/bblanchon/ArduinoJson/tree/v5.13.1
  https://github.com/xreef/PCF8574_library
  
  4.)Firebase den HOST ve AUTH alıyoruz. bir yere kaydediyoruz.
  
  5.)Firebasede bulunan projemizn linkini, benim projemin linki bu https://esp8266-19d6f.firebaseio.com/ parmak izini güncelleyeceğiz bunu ise
  https://www.grc.com/fingerprints.htm site yardımı ile yapacağız. Firebasede aldığımız linki bu siteye yapıştırıyoruz ve parmak izimizi bir yere
  not ediyoruz daha sonra ise Arduinomuza library olarak ekledğimiz dosya yerinde firebase-arduino-master> src> FirebaseHttpClient adlı dosyayı
  Not defteri ile açıyoruz static const char FirebaseFingerprint[] adlı parmak izninin altında bulunan
  03: 9E: 4F: E6: 83: FC: 40: EF: FC: B2: C5: EF: 36: 0E: 7C: 3C: 42: 20: 1B: 8F sayısını not ettiğimiz parmak izi ile güncelleniyoruz daha sonra ise
  dosyamızı kaydediyoruz.
*/
  
 // Gerekli kütüphaneleri ekledik
#include <ESP8266WiFi.h>
#include <FirebaseArduino.h>
#include <Wire.h>
#include <PCF8574.h>

// pcflerin adreslerini girdik
PCF8574 pcf1(0x3F), pcf2(0x3E), pcf3(0x3D), pcf4(0x3C);


int liste[18];

enum PCFS { BIR = 1, IKI = 2, UC = 3, DORT = 4 };

// firebasemizin bağlantısı koparsa tekrar bağlanmasını istedik
void firebasereconnect() { Firebase.begin("esp8266-19d6f.firebaseio.com", "t03ncaUaGGmRryLsWXRhe0bMqlkqR8PJ5TEmn6Jn"); }

void setup(){
    
    pcf1.begin(), pcf2.begin(), pcf3.begin(), pcf4.begin(); // pclerimizi başlattık
    WiFi.begin("HHH", "124413443h");  // wifimizi başlattık
    Firebase.begin("esp8266-19d6f.firebaseio.com", "t03ncaUaGGmRryLsWXRhe0bMqlkqR8PJ5TEmn6Jn"); // pcfmizi başlattık

    // pcflerimizin pinlerini çıkış olarak ayarladık
    for (int i = 0; i < 8; i++) { pcf1.pinMode(i, OUTPUT), pcf2.pinMode(i, OUTPUT), pcf3.pinMode(i, OUTPUT), pcf4.pinMode(i, OUTPUT); }

    // ilk başta ledlerimizin hepsinin yeşil yanmasını istedik
    // p3 pini öbür pinlere göre tam tersi çalıştığı için 0, öbür pinleri ise 1 olarak ayarladık
    for (int i = 0; i < 8; i++) {
        if (i == P3) { pcf1.digitalWrite(i, 0), pcf2.digitalWrite(i, 0), pcf3.digitalWrite(i, 0), pcf4.digitalWrite(i, 0); } 
        else { pcf1.digitalWrite(i, 1), pcf2.digitalWrite(i, 1), pcf3.digitalWrite(i, 1), pcf4.digitalWrite(i, 1); }
    }
}


void hhh(PCFS mod, int pin1, int pin2, bool value1, bool value2) {
  if (PCFS::BIR == mod) { pcf1.digitalWrite(pin1, value1), pcf1.digitalWrite(pin2, value2); } 
  else if (PCFS::IKI == mod) { pcf2.digitalWrite(pin1, value1), pcf2.digitalWrite(pin2, value2); } 
  else if (PCFS::UC == mod) { pcf3.digitalWrite(pin1, value1), pcf3.digitalWrite(pin2, value2); } 
  else if (PCFS::DORT == mod) { pcf4.digitalWrite(pin1, value1), pcf4.digitalWrite(pin2, value2); }
}

void checker() {
    for (int i = 1; i < 17; i++)
        liste[i] = Firebase.getString(String("buton") + String(i)).toInt();

    for (int i = 1; i < 17; i++) {
        if (i == 1) { if (liste[i] == 1) hhh(PCFS::BIR, P0, P1, 1, 0); else hhh(PCFS::BIR, P0, P1, 0, 1); }
        if (i == 2) { if (liste[i] == 1) hhh(PCFS::BIR, P2, P3, 1, 1); else hhh(PCFS::BIR, P2, P3, 0, 0); }
        if (i == 3) { if (liste[i] == 1) hhh(PCFS::BIR, P4, P5, 1, 0); else hhh(PCFS::BIR, P4, P5, 0, 1); }
        if (i == 4) { if (liste[i] == 1) hhh(PCFS::BIR, P6, P7, 1, 0); else hhh(PCFS::BIR, P6, P7, 0, 1); }
        if (i == 5) { if (liste[i] == 1) hhh(PCFS::IKI, P0, P1, 1, 0); else hhh(PCFS::IKI, P0, P1, 0, 1); }
        if (i == 6) { if (liste[i] == 1) hhh(PCFS::IKI, P2, P3, 1, 1); else hhh(PCFS::IKI, P2, P3, 0, 0); }
        if (i == 7) { if (liste[i] == 1) hhh(PCFS::IKI, P4, P5, 1, 0); else hhh(PCFS::IKI, P4, P5, 0, 1); }
        if (i == 8) { if (liste[i] == 1) hhh(PCFS::IKI, P6, P7, 1, 0); else hhh(PCFS::IKI, P6, P7, 0, 1); }
        if (i == 9) { if (liste[i] == 1) hhh(PCFS::UC, P0, P1, 1, 0); else hhh(PCFS::UC, P0, P1, 0, 1); }
        if (i == 10) { if (liste[i] == 1) hhh(PCFS::UC, P2, P3, 1, 1); else hhh(PCFS::UC, P2, P3, 0, 0); }
        if (i == 11) { if (liste[i] == 1) hhh(PCFS::UC, P4, P5, 1, 0); else hhh(PCFS::UC, P4, P5, 0, 1); }
        if (i == 12) { if (liste[i] == 1) hhh(PCFS::UC, P6, P7, 1, 0); else hhh(PCFS::UC, P6, P7, 0, 1); }
        if (i == 13) { if (liste[i] == 1) hhh(PCFS::DORT, P0, P1, 1, 0); else hhh(PCFS::DORT, P0, P1, 0, 1); }
        if (i == 14) { if (liste[i] == 1) hhh(PCFS::DORT, P2, P3, 1, 1); else hhh(PCFS::DORT, P2, P3, 0, 0); }
        if (i == 15) { if (liste[i] == 1) hhh(PCFS::DORT, P4, P5, 1, 0); else hhh(PCFS::DORT, P4, P5, 0, 1); }
        if (i == 16) { if (liste[i] == 1) hhh(PCFS::DORT, P6, P7, 1, 0); else hhh(PCFS::DORT, P6, P7, 0, 1); }
    }
}

void loop() {
  if (Firebase.failed())
        firebasereconnect();
   
   checker();
}
