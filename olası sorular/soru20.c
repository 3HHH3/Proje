/*
Hasan Hüseyin Harmancı
İki sayının OKEK ini bulan prg.
Acıkama: asagıdakı kullandıgımız kod 
OBEB kodu ile aynıdır sadece for don 
dısında obeb buldugumuz sayıyı okek'e ceviriyoruz
17.12.2020
*/
#include <stdio.h>
 
int main() {
 // asagıda degiskenlerimizi olusturduk
    int sayi1, sayi2, kucukSayi;
    int i, obeb = 1, sonuc;

// birinci sayıyı aldık ve sayi1 adlı degiskene atadık
    printf("Birinci Sayiyi Giriniz: ");
    scanf("%d", &sayi1);

// ikinci sayıyı aldık ve sayi2 adlı degiskene atadık
    printf("Ikinci Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

/*aşagıda kosul kosuk kosuyoruz
eger sayi1 degeri sayi2 degerinden küçükse sayi1 degerini 
kucukSayi degerinin içine atıyoruz
degilse sayi2 degerini kucukSayi degerinin içine atıyoruz
*/
    if (sayi1 < sayi2)
        kucukSayi = sayi1;
    else
        kucukSayi = sayi2;


/* for do olusturuyoruz i degerimizi 2 den baslatıyoruz, 
i degerimiz küçük veya eşit kucukSayi degerine ulasana kadar calısacak,
her dongü tekrarında ise i degerimizi 1 arttırıyoruz
daha sonra for don içinde kosul kosuyoruz
sayi1'i i'ye bölüyoruz kalanı 0'a eşit VE sayi2'yi i'ye bölüyoruz kalanı 0'a eşitse
i degerimizi sonuc adlı degiskene atıyoruz ve daha for don dısında obeb buldugumuz 
sayıyı okek'e ceviriyoruz (sonuc = (sayi1 * sayi2) / obeb) daha sonrada buldugumuz 
degerleriprıntf ile ekrana yazdırıyoruz 
*/
    for (i = 2; i <= kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0)
            obeb = i;
    }
    sonuc = (sayi1 * sayi2) / obeb;
    
    printf("OKEK(%d,%d) = %d", sayi1, sayi2, sonuc);
    return 0;

}