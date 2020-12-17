/*
Hasan Hüseyin Harmancı
klavyeden girilen iki sayı arasındaki sayıların Asal sayılarını yazdrma
17.12.2020
*/
#include <stdio.h>

int main()
{ // degişkenlerimiz
    int sayi1, sayi2, i, j, bayrak;

    printf("Lütfen işlem yapmak istediğiniz aralıgı giriniz: ");
    scanf("%d %d", &sayi1, &sayi2);

    printf("%d - %d arasındaki asal sayılar:\n", sayi1, sayi2);

    /*i degerini sayi1 degerini 1 arttırarak başlattık, i degerimiz 
    sayi2 degerinden küçük oldugu sürece calısacaktır, dongumuzu her 
    defasında i degerini 1 arttırıyoruz*/
    for (i = sayi1 + 1; i < sayi2; ++i)
    {
        bayrak = 0; //bayrak 0 olarak ayarlandı

        /* j degerimizi 2 den baslattık, j i degerinden kücük veya 
        esit oldugu surece calısacaktır, ve her dongu tekrarında j degerimiz 1 artacaktır*/
        for (j = 2; j <= i / 2; ++j)
        {
            /*eger i degerimizi j degerine boldugumuz zaman kalan 0 ise 
            bayrak adlı degişkenin degerini 1 yap ve if don. cık*/
            if (i % j == 0)
            {
                bayrak = 1;
                break;
            }
        }
        /*eger bayrak adlı degiskenimiz 0'a eşitse asagıdakı kod blogu calısacaktır*/
        if (bayrak == 0) //eger bayrak 0'a esit oldugu sayıları yazdıracaktır
            printf("%d\t", i);
    }
    return 0;
}