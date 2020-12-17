/*
Hasan Hüseyin Harmancı
Mekatronik Prg.
10.12.2020
*/
// Verilen iki sayının OBEB'ini bul
#include <stdio.h>
int main()
{
   int sayi1, sayi2, i, goster;

   printf("İki sayı girin: ");
   scanf("%d %d", &sayi1, &sayi2);

   for (i = 1; i <= sayi1 && i <= sayi2; i++)
   {
      if (sayi1 % i == 0 && sayi2 % i == 0)
         goster = i;
   }

   printf("%d ve %d EBOB'u : %d", sayi1, sayi2, goster);

   return 0;
}
