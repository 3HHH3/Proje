
/*
Bir sayının asal olup olmadığını bulmak için çeşitli metodlar 
vardır. Aşağıda bu metodlardan basit bir tanesi yazılmıştır. 
Eğer sayının yarısına kadar kontrol etmek yerine, kareköküne 
kadar olan sayıları test ederseniz, yine aynı sonuç çıkacaktır. 
Ancak anlaşılma konusunda sorun olmaması için soru bu şekilde 
çözülmüştür.
*/
#include <stdio.h>
int main(void)
{
    int sayi, i;
    //Sayıyı ilk başta asal kabul ediyoruz.
    //asal_mi değişkeni 1 ise, sayi asaldir.
    int asal_mi = 1;

    //Klavyeden, test edilmek üzere bir sayı alınıyor.
    printf("Bir sayı giriniz> ");
    scanf("%d", &sayi);

    //Girilen sayının, başka sayılara göre sırayla modunu
    //alıyoruz. Bir sayının modunu aldığınızda, kalan 0 ise
    //bu sayının bölünebildiğine ve dolayısıyla
    //asal olmadığına dair bilgi verir. Bu işlemi yapabilmek
    //için 2'den başlayarak, sayının yarısına kadar olan
    //bütün değerler deneniyor.
    for (i = 2; i <= sayi / 2; i++)
    {
        if (sayi % i == 0)
        {
            //Sayı i değişkenine kalansız bölünmektedir.
            //Dolayısıyla, sayı asal değildir ve döngüyü
            //sürdürmeye gerek yoktur.
            asal_mi = 0;
            break;
        }
    }
    //Sayının asal olup olmama durumuna göre, çıktı yazdırılıyor.
    if (asal_mi == 1)
        printf("%d sayısı asaldır.\n", sayi);
    else
        printf("%d sayısı asal değildir.\n", sayi);

    return 0;
}