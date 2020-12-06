/*
Klavyeden girilen sayının tersini 
(örneğin 1234 ==> 4321 gibi) ekrana 
bastıran programı yazınız.
*/
#include <stdio.h>
int main(void)
{

   int sayi;
   int yazilacak_rakam;

   printf("Sayıyı giriniz> ");
   scanf("%d", &sayi);

   printf("Sayının tersi: ");
   while (sayi > 10)
   {
      //Sayının son rakamı alınıp
      //ekrana bastırılıyor.
      yazilacak_rakam = sayi % 10;
      printf("%d", yazilacak_rakam);
      //Son rakam ekrana bastırıldığı
      //için sayının son hanesi atılıyor.
      sayi /= 10;
   }
   printf("%d\n", sayi);

   return 0;
}