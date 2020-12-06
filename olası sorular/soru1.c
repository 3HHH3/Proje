/*
Klavyeden alınacak bir değerin, 
18 ile 65 arasında olup olmadığını 
kontrol eden bir program yazınız:
*/
#include <stdio.h>
int main(void)
{
   int girilen_yas;
   printf("Lütfen yaşınızı giriniz> ");
   scanf("%d", &girilen_yas);
   if (girilen_yas >= 18 && girilen_yas <= 65)
      printf("Girilen yaş, 18 ile 65 arasındadır.\n");
   //Girilen yaş 18 ile 65 arasında değilse, aşağıdaki else
   //bloğu çalışır.
   else
   {
      //Girilen yaş 18'den küçükse
      if (girilen_yas < 18)
         printf("Girilen yaş, 18'den küçüktür.\n");
      //Girilen yaş 65'ten büyükse
      else
         printf("Girilen yaş, 65'ten büyüktür.\n");
   }
}