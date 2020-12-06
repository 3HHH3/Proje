/*
Kendisine verilen iki tam sayıyı, 
bölecek ve sonucu virgüllü sayı 
olarak gösterecek bir bölme işlemini
programı hazırlayınız. (Şayet bölen 0 
olarak verilirse, bölme işlemi yapılmamalıdır.)
*/
#include <stdio.h>
int main(void)
{
   int bolunen, bolen;
   float sonuc;
   printf("Bölünecek sayıyı giriniz> ");
   scanf("%d", &bolunen);
   printf("Bölen sayıyı giriniz> ");
   scanf("%d", &bolen);
   //Bolen, 0 ise, bir sayı sıfıra bölünemeyeceğinden,
   //program sorun çıkartacaktır. Bu yüzden,
   //bolenin 0 olmaması kontrol ediliyor.
   if (bolen != 0)
   {
      sonuc = (float)bolunen / bolen;
      //.2f, virgülden sonra 2 basamak gösterilmesi
      //içindir.
      printf("Sonuc: %.2f\n", sonuc);
   }
   else
      printf("Hata: Sayı 0'a bölünemez!\n");
}