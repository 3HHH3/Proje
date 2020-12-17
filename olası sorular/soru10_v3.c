/*
Hasan Hüseyin Harmancı
Klavye kenar uzunluğu ile verilen değerlerin 
üçgen oluşturup oluşturmadığını öğrenen program c dili

17.11.2020
*/
#include <stdio.h>

int main()
{
    int a, b, c;

    /* deger degişkenini 0 olarak başlttık*/
    int deger = 0;

   // 3 kenarımızı giriyoruz
    printf("Lütfen 3 kenarı girinzi: \n");
    scanf("%d%d%d", &a, &b, &c);

    if ((a + b) > c)//eger a+b> c büyükse aşağıdaki kod blogu calısacaktır
    {
        if ((b + c) > a)//eger b+c> a büyükse aşağıdaki kod blogu calısacaktır
        {
            if ((a + c) > b)
            //eger a+c> b büyükse aşağıdaki kod blogu calısacaktır 
            //ve deger adlı degişkenin degerini 1 yapacaktır
            {
                deger = 1;
            }
        }
    }

    /* eger deger adlı degişkenimiz 1 ise üçgen yazdır 
    değilse üçgen değildir yazdır */
    if (deger == 1)
    {
        printf("üçgen olusturur.");
    }
    else
    {
        printf("üçgen olusturmaz.");
    }

    return 0;
}