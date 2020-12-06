/*
Dört basamaklı bir sayının rakamları, ters yazılıp, 4 ile 
çarpılırsa, sayının kendisine eşit olmaktadır. Bu program, 
bahsedilen dört basamaklı bu sayıyı bulmaktadır. 
*/
#include <stdio.h>
int main(void)
{
    //Dört basamaklı bir sayının tersinin dört katına
    //eşit olmasını hesaplamamız gerektiğinden, her
    //basamağı ayrı ayrı düşünmemiz gerekmektedir.
    //Bilinmeyen bu sayıyı, abcd olarak düşünebiliriz.
    int a, b, c, d;
    int sayi, sayinin_tersi;
    for (a = 0; a < 10; a++)
        for (b = 0; b < 10; b++)
            for (c = 0; c < 10; c++)
                for (d = 0; d < 10; d++)
                {
                    //Burada sayinin degeri bulunmaktadir.
                    sayi = a * 1000 + b * 100 + c * 10 + d;

                    //Burada da sayinin tersi hesaplanmaktadir.
                    sayinin_tersi = d * 1000 + c * 100 + b * 10 + a;

                    //Sayinin tersinin 4 katinin ilk sayiya
                    //esit olup olmadigi kontrol ediliyor.
                    //Ayrica sayinin 0 olmamasi gerekmektedir.
                    //Bu kontrol de yapilmaktadir.
                    if (sayi == 4 * sayinin_tersi && sayi != 0)
                    {

                        //Sayi ve uygun olan tersi gosterilir:
                        printf("Sayı: %d, tersi: %d\n", sayi, sayinin_tersi);

                        //return ifadesi programin daha fazla devam
                        //etmemesi icin burada kullanilmistir.
                        //Program donguye devam etmez ve burada kesilir.
                        //return, main fonksiyonunu sonlandirir.
                        return 0;
                    }
                }
    //Uygun bir sayi bulunamazsa, program burada sonlanacaktir.
    return 0;
}