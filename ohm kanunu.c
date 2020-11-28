
/*
Ohm kanunu
V= gerilim (volt),
i= akım (amper),
R= direnç (ohm),
V=i*R
28.11.2020
*/
#include <stdio.h>
int main()
{
   float v, i, r;
   int secim;

   printf("Ohm formülüne hoşldiniz \n\n");
   printf("Lütfen bulmak istediğiniz işlemi seçiniz \n");
   printf("Gerilim (volt) = 1,\n");
   printf("Akım (amper) = 2,\n");
   printf("Direnç (ohm) = 3,\n");
   printf("tuşlayınız: ");
   scanf("%d", &secim);

   switch (secim)
   {
   case 1: //Gerilim (volt)

   {
      printf("\n\nGerilim (volt) işlemini seçtiniz.\n\n");
      printf("Lütfen Akım (amper) değerini yazınız: ");
      scanf("%f", &i);
      printf("Lütfen Direnç (ohm) değerini yazınız: ");
      scanf("%f", &r);
      v = i * r;
      printf("Gerilim (volt) Sonucu: %.3f", v);
      break;
   }

   case 2: //Akım (amper)

   {
      printf("\n\nAkım (amper) işlemini seçtiniz.\n\n");
      printf("Lütfen Gerilim (volt) değerini yazınız: ");
      scanf("%f", &v);
      printf("Lütfen Direnç (ohm) değerini yazınız: ");
      scanf("%f", &r);
      i = v / r;
      printf("Akım (amper) Sonucu: %.3f", i);
      break;
   }
   case 3: //Direnç (ohm)

   {
      printf("\n\nDirenç (ohm) işlemini seçtiniz.\n\n");
      printf("Lütfen Gerilim (volt) değerini yazınız: ");
      scanf("%f", &v);
      printf("Lütfen Akım (amper) değerini yazınız: ");
      scanf("%f", &i);
      r = v / i;
      printf("Direnç (ohm) Sonucu: %.3f", r);
      break;
   }

   default:
   {
      printf("\n\nHATA: Bilinmeyen bir değer girdiniz!");
   }

      return 0;
   }
}