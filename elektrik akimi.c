
/*
Elektrik akımı formülü
*i=q/t
q=elektrik (klon),
t=zaman (saniye),
i=akım (amper),
28.11.2020
*/
#include <stdio.h>
int main()
{
   float q, t, i;

   printf("Elektrik Akımı formülüne hoşldiniz \n\n");
   printf("lütfen Elektrik yükü(klon) degerini giriniz: ");
   scanf("%f", &q);

   printf("lütfen Zaman(saniye) sayısını giriniz: ");
   scanf("%f", &t);

   i = q / t;// akım formülü
   printf("\n\nElektrik Akımı sonucu: %f", i);
   return 0;
}
