/*
Verilecek üç sayıdan en büyüğünü ekrana 
yazdıracak bir program yazınız.
*/
#include <stdio.h>
int main(void)
{
   int sayi_1, sayi_2, sayi_3;
   printf("Üç sayı giriniz> ");
   scanf("%d %d %d", &sayi_1, &sayi_2, &sayi_3);
   if (sayi_1 >= sayi_2 && sayi_1 > sayi_3)
      printf("%d en büyük sayıdır!\n", sayi_1);
   else if (sayi_2 >= sayi_1 && sayi_2 >= sayi_3)
      printf("%d en büyük sayıdır!\n", sayi_2);
   else if (sayi_3 >= sayi_1 && sayi_3 >= sayi_1)
      printf("%d en büyük sayıdır!\n", sayi_3);
   return 0;
}