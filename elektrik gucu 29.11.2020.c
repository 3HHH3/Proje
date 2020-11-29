/*
*****Elektrik gücü formülü*****
>w=e*i*t
>e=w/(i*t)
>i=w/(e*t)
>t=w/(e*i)
w= elektrik işi (joule),
e= Alıcı gerilimi (volt),
i= Alıcı akımı (amper),
t= Alıcının calısma suresi(sn),

29.11.2020
*/
#include <stdio.h>
int main()
{
   float w, e, i, t;
   int secim3;

   printf("Elektrik gucu formulune hosldiniz \n\n");
   printf("Lütfen bulmak istediğiniz işlemi seçiniz \n");
   printf("(w=e*i*t) = 1,\n");   //w=e*i*t
   printf("(e=w/(i*t)) = 2,\n"); //e=w/(i*t)
   printf("(i=w/(e*t)) = 3,\n"); //i=w/(e*t)
   printf("(t=w/(e*i)) = 4,\n"); //t=w/(e*i)

   printf("tuşlayınız: ");
   scanf("%d", &secim3);

   switch (secim3)
   {
   case 1: //w=e*i*t

   {
      printf("\n\nw=e*i*t işlemini seçtiniz.\n\n");
      printf("Lütfen (e= Alıcı gerilimi (volt)) değerini yazınız: ");
      scanf("%f", &e);
      printf("Lütfen (i= Alıcı akımı (amper)) değerini yazınız: ");
      scanf("%f", &i);
      printf("Lütfen (t= Alıcının calısma suresi(sn)) değerini yazınız: ");
      scanf("%f", &t);
      w = e * i * t;
      printf("(w) Sonucu: %.3f", w);
      break;
   }

   case 2: //e=w/(i*t)

   {
      printf("\n\ne=w/(i*t) işlemini seçtiniz.\n\n");
      printf("Lütfen (w= elektrik işi (joule)) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (i= Alıcı akımı (amper)) değerini yazınız: ");
      scanf("%f", &i);
      printf("Lütfen (t= Alıcının calısma suresi(sn)) değerini yazınız: ");
      scanf("%f", &t);
      e = w / (i * t);
      printf("(e) Sonucu: %.3f", e);
      break;
   }
   case 3: //i=w/(e*t)

   {
      printf("\n\ni=w/(e*t) işlemini seçtiniz.\n\n");
      printf("Lütfen (w= elektrik işi (joule)) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (e= Alıcı gerilimi (volt)) değerini yazınız: ");
      scanf("%f", &e);
      printf("Lütfen (t= Alıcının calısma suresi(sn)) değerini yazınız: ");
      scanf("%f", &t);
      i = w / (e * t);
      printf("(i) Sonucu: %.3f", i);
      break;
   }

   case 4: //t=w/(e*i)

   {
      printf("\n\nt=w/(e*i) işlemini seçtiniz.\n\n");
      printf("Lütfen (w= elektrik işi (joule)) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (e= Alıcı gerilimi (volt)) değerini yazınız: ");
      scanf("%f", &e);
      printf("Lütfen (i= Alıcı akımı (amper)) değerini yazınız: ");
      scanf("%f", &i);
      t = w / (e * i);
      printf("(t) Sonucu: %.3f", t);
      break;
   }
   default:// hata oldugunda cıkacak
   {
      printf("\n\nHATA: Bilinmeyen bir değer girdiniz!");
   }
   }
   return 0;
}
