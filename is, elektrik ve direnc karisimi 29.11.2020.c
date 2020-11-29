
/*
*****iş ve enerji formülü*****
>w=f*l
>f=w/l
>l=w/f
w= iş,
f= kuvvet,
l= alınan yol,

*****Elektrik gücü formülü*****
>w=e*i*t
>e=w/(i*t)
>i=w/(e*t)
>t=w/(e*i)
w= elektrik işi (joule),
e= Alıcı gerilimi (volt),
i= Alıcı akımı (amper),
t= Alıcının calısma suresi(sn),

*****Direncin gücü formülü*****
>p=w/t
>p=v*i
>p=i^2*r
>p=v^2/r
p= cihazın gücü(watt),
u= uygulanan gerilim(volt),
i= çekilen akım (amper),

29.11.2020
*/
#include <stdio.h>
float w, f, l, e, i, t, p, v, r;
int secim1, secim2, secim3, secim4;

int main()
{
   printf("İs ve Enerji, Elektrik gücü formulune hosldiniz \n\n");
   printf("Lutfen bulmak istediginiz islemi seciniz \n");
   printf("İs ve Enerji = 1,\n");
   printf("Elektrik gücü = 2,\n");
   printf("Direncin gücü = 3,\n");
   printf("tuslayınız: ");
   scanf("%d", &secim1);
   printf("\n\n");

   switch (secim1) //İs ve Enerji, Elektrik gucu arasından secim yapıyoruz
   {
   case 1: //*****İs ve Enerji*****
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

      default: // hata oldugunda cıkacak eror2
      {
         printf("\n\nHATA: Bilinmeyen bir değer girdiniz! EROR 2");
      }
      }

      break;
   }

   case 2: //*****Elektrik gucu*****
   {

      printf("Elektrik gucu formulune hosldiniz \n\n");
      printf("Lütfen bulmak istediğiniz işlemi seçiniz \n");
      printf("(w=e*i*t) = 1,\n");   //w=e*i*t
      printf("(e=w/(i*t)) = 2,\n"); //e=w/(i*t)
      printf("(i=w/(e*t)) = 3,\n"); //i=w/(e*t)
      printf("(t=w/(e*i)) = 4,\n"); //t=w/(e*i)

      printf("tuşlayınız: ");
      scanf("%d", &secim3);

      switch (secim3) //w=e*i*t, e=w/(i*t), i=w/(e*t), t=w/(e*i) arasından secim yapıyoruz
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
      default: // hata oldugunda cıkacak eror3
      {
         printf("\n\nHATA: Bilinmeyen bir değer girdiniz! EROR 3");
      }
      }

      break;
   }

   case 3: //*****Direncin gucu formülü*****
   {

      printf("Direncin gücüne hoşldiniz \n\n");
      printf("Lütfen yapmak istediğiniz işlemi seçiniz \n");
      printf("p=w/t = 1,\n");
      printf("p=v*i = 2,\n");
      printf("p=i^2*r = 3,\n");
      printf("p=v^2/r = 4,\n");
      printf("tuşlayınız: ");
      scanf("%d", &secim4);

      switch (secim4) //p=w/t, p=v*i, p=i^2*r, p=v^2/r arasından seciyoruz
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
      default: //hata oldugunda cıkacak eror4
      {
         printf("\n\nHATA: Bilinmeyen bir değer girdiniz! EROR 4");
      }
      }

      break;
   }

   default: // hata oldugunda cıkacak eror 1
   {
      printf("\n\nHATA: Bilinmeyen bir değer girdiniz! EROR 1");
   }
   }

   return 0;
}
