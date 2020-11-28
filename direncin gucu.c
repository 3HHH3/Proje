
/*
Direncin gücü formülü
p= cihazın gücü(watt),
u= uygulanan gerilim(volt),
i= çekilen akım (amper),
>p=w/t
>p=v*i
>p=i^2*r
>p=v^2/r
28.11.2020
*/
#include <stdio.h>
int main()
{
   float w, t, p, v, i, r;
   int secim;

   printf("Direncin gücüne hoşldiniz \n\n");
   printf("Lütfen yapmak istediğiniz işlemi seçiniz \n");
   printf("p=w/t = 1,\n");
   printf("p=v*i = 2,\n");
   printf("p=i^2*r = 3,\n");
   printf("p=v^2/r = 4,\n");
   printf("tuşlayınız: ");
   scanf("%d", &secim);

   switch (secim)
   {
   case 1: //p=w/t

   {
      printf("\n\np=w/t işlemini seçtiniz.\n\n");
      printf("Lütfen (w) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (t) değerini yazınız: ");
      scanf("%f", &t);
      p = w / t;
      printf("p Sonucu: %.3f", p);
      break;
   }

   case 2: //p=v*i

   {
      printf("\n\np=v*i işlemini seçtiniz.\n\n");
      printf("Lütfen (v) değerini yazınız: ");
      scanf("%f", &v);
      printf("Lütfen (i) değerini yazınız: ");
      scanf("%f", &i);
      p = v * i;
      printf("p Sonucu: %.3f", p);
      break;
   }
   case 3: //p=i^2*r

   {
      printf("\n\np=i^2*r işlemini seçtiniz.\n\n");
      printf("Lütfen (i) değerini yazınız: ");
      scanf("%f", &i);
      printf("Lütfen (r) değerini yazınız: ");
      scanf("%f", &r);
      p = i * i * r;
      printf("p Sonucu: %.3f", p);
      break;
   }

   case 4: //p=v^2/r

   {
      printf("\n\np=v^2/r işlemini seçtiniz.\n\n");
      printf("Lütfen (v) değerini yazınız: ");
      scanf("%f", &v);
      printf("Lütfen (r) değerini yazınız: ");
      scanf("%f", &r);
      p = (v * v) / r;
      printf("p Sonucu: %.3f", p);
      break;
   }
   default:
   {
      printf("\n\nHATA: Bilinmeyen bir değer girdiniz!");
   }

      return 0;
   }
}