
/*
*****iş ve enerji formülü*****
>w=f*l
>f=w/l
>l=w/f
w= iş,
f= kuvvet,
l= alınan yol,

28.11.2020
*/
#include <stdio.h>
float w, f, l;
int secim2;

int main()
{

   printf("İs ve Enerji formülüne hoşldiniz \n\n");
   printf("Lütfen bulmak istediğiniz işlemi seçiniz \n");
   printf("(w = iş) = 1,\n");
   printf("(f= kuvvet) = 2,\n");
   printf("(l= alınan yol) = 3,\n");
   printf("tuşlayınız: ");
   scanf("%d", &secim2);

   switch (secim2) //w=f*l, f=w/l, l=w/f arasından secim yapıyoruz.
   {
   case 1: //w=f*l

   {
      printf("\n\nw=f*l işlemini seçtiniz.\n\n");
      printf("Lütfen (f= kuvvet) değerini yazınız: ");
      scanf("%f", &f);
      printf("Lütfen (l= alınan yol) değerini yazınız: ");
      scanf("%f", &l);
      w = f * l;
      printf("(w = iş) Sonucu: %.3f", w);
      break;
   }

   case 2: //f=w/l

   {
      printf("\n\nf=w/l işlemini seçtiniz.\n\n");
      printf("Lütfen (w = iş) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (l= alınan yol)  değerini yazınız: ");
      scanf("%f", &l);
      f = w / l;
      printf("(f=w/l) Sonucu: %.3f", f);
      break;
   }
   case 3: //l=w/f

   {
      printf("\n\nl=w/f işlemini seçtiniz.\n\n");
      printf("Lütfen (w = iş) değerini yazınız: ");
      scanf("%f", &w);
      printf("Lütfen (f= kuvvet) değerini yazınız: ");
      scanf("%f", &f);
      l = w / f;
      printf("Direnç (ohm) Sonucu: %.3f", l);
      break;
   }

   default: // hata oldugunda cıkacak
   {
      printf("\n\nHATA: Bilinmeyen bir değer girdiniz!");
   }
   }

   return 0;
}
