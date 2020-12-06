/*
Klavyeden girilen sayının faktöriyelini 
hesaplayıp, ekrana yazdıran bir program yazınız.
*/
#include <stdio.h>
int main(void)
{

   int sayi, i;
   int faktoriyel = 1;

   printf("Sayı giriniz> ");
   scanf("%d", &sayi);

   //Şayet sayı 0'a büyük eşitse, faktoriyel
   //hesaplanır.
   if (sayi >= 0)
   {
      //Şayet sayı 0 ise, alttaki döngü
      //hiç çalışmaz.
      for (i = sayi; i > 0; i--)
      {
         faktoriyel *= i;
      }
      printf("Faktoriyel = %d\n", faktoriyel);
   }
   //Şayet sayı 0'dan küçükse, değer hesaplanamaz.
   else
      printf("HATA: Sayı 0'dan küçük olamaz!\n");
   return 0;
}