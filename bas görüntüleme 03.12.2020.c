/*
Hasan Hüseyin Harmancı
Mekatronik Prg.
03.11.2020

switch case ile 0-99 arasi 
sayilari birler ve onlar bas. yazdırma*/
#include <stdio.h>

int main()
{
   int sayi;
   printf("lütfen 0-99 arasi sayi girin : ");
   scanf("%d", &sayi);

   if (sayi <= 99) // kosulumuz 99'a eşit veya kucukse calısacak
   {
      printf("onlar bas. ");
      switch (sayi / 10) // sayıyı 10'a bolunce onlar bas. bulunur.
      {
      case 1:
         printf("ON");
         break;
      case 2:
         printf("YİRMİ");
         break;
      case 3:
         printf("OTUZ");
         break;
      case 4:
         printf("KIRK");
         break;
      case 5:
         printf("ELLİ");
         break;
      case 6:
         printf("ALTMİS");
         break;
      case 7:
         printf("YETMİS");
         break;
      case 8:
         printf("SEKSEN");
         break;
      case 9:
         printf("DOKSAN");
         break;
      }
      printf(" >>> ");
      printf("birler bas. ");
      switch (sayi % 10) // sayinin 10 göre modunu alırsak birler bas. buluruz
      {
      case 1:
         printf("BİR");
         break;
      case 2:
         printf("İKİ");
         break;
      case 3:
         printf("ÜÇ");
         break;
      case 4:
         printf("DORT");
         break;
      case 5:
         printf("BES");
         break;
      case 6:
         printf("ALTI");
         break;
      case 7:
         printf("YEDİ");
         break;
      case 8:
         printf("SEKİZ");
         break;
      case 9:
         printf("DOKUZ");
         break;
      }
   }

   else
   {
      printf("yazdiginiz sayi 99 dan buyuktur lütfen tekrar deneyiniz");
   }

   return 0;
}
