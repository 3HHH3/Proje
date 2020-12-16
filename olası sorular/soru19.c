
/*
Hasan Hüseyin Harmancı
For Döngüsü
1+5+9+13+...41 e kadar sayıların toplamı bulan program
Not: her defasında 4 eklenerek gidiyor
https://youtu.be/yUHEnEQn1B4

*/

#include <stdio.h>

int main()
{
    int toplam = 0; // toplam adında değişken olusturuyoruz ve 0'dan baslatıyoruz
    for (int i = 1; i <= 41; i += 4)
    /* 
    i degerimizi 1'den baslattık, 
    i degerimiz küçük veya eşit 41 koşulunu çaladıgı müddetce çalısacaktır, 
    koşulu sagladıgı müddetce i degerini 4 arttıracaktır.
   */
    {
        toplam = toplam + i; // 0+1=1, 1+i=5, 5+i=9, ...
    }
    printf("toplam %d ", toplam); // en sondda sonucumuzu gosteriyoruz

    return 0;
}
