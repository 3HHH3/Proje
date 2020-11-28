
/*
Gerilim bölücü formülü
*/
#include <stdio.h>
int main()
{
  float alt, ust, vin, vout;

  printf("Gerilim bölücü formülüne hoşldiniz \n\n");
  printf("lütfen Vin(volt) degerini giriniz: ");
  scanf("%f", &vin);

  printf("lütfen R üst(ohm) sayısını giriniz: ");
  scanf("%f", &ust);

  printf("lütfen R alt(ohm) sayısını giriniz: ");
  scanf("%f", &alt);

  vout = (vin * alt) / (ust + alt); //gerilim bölücü formül
  printf("\n\nGerilim bölücü sonucu %f", vout);
  return 0;
}