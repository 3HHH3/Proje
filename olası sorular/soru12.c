/*
Klavyeden girilecek 0 ile 999 arasında 
bir tam sayının, yazıyla ifade eden 
( örneğin 49, 'kırkdokuz' gibi ) bir 
program oluşturunuz.
*/
#include <stdio.h>
int main(void)
{
    int sayi;

    //Klavyeden girilecek sayinin 0 ile 999 sınırlarında
    //olup olmadığı kontrol ediliyor. Eğer değilse,
    //uyarı verilip, yeni bir sayı isteniyor. Bu işlem
    //doğru bir değer girilene kadar devam ediyor.
    do
    {
        printf("Sayıyı giriniz> ");
        scanf("%d", &sayi);
        if (sayi > 999 || sayi < 0)
            printf("Girdiğiniz sayı uygun değildir.\n"
                   "0 ile 999 arasında olmalıdır.\n");
        else
            break;
    } while (1);

    printf("%d sayısı, '", sayi);

    //Verilen sayıyı, yazıyla ifade edebilmemiz için,
    //yüzler, onlar ve birler basamaklarına ayırmamız
    //gerekmektedir.

    //Sayının yüzler basamağı ayrıştırılıyor.
    //Bunun için sayıyı, 100'e bölmek yeterli.

    //YÜZLER BASAMAĞI:
    switch (sayi / 100)
    {
    case 9:
        printf("dokuzyüz");
        break;
    case 8:
        printf("sekizyüz");
        break;
    case 7:
        printf("yediyüz");
        break;
    case 6:
        printf("altıyüz");
        break;
    case 5:
        printf("beşyüz");
        break;
    case 4:
        printf("dörtyüz");
        break;
    case 3:
        printf("üçyüz");
        break;
    case 2:
        printf("ikiyüz");
        break;
    case 1:
        printf("yüz");
        break;
    }

    //Onlar basamağını bulmak için, sayının
    //yüze bölümünden kalan değeri, 10'a
    //bölüyoruz. Yüzler basamağını bir önceki
    //adımda ele aldığımız için, bu adımda,
    //sayının yüze bölümünü değil, bölümünden
    //kalanı kullandık.

    //ONLAR BASAMAĞI:
    switch ((sayi % 100) / 10)
    {
    case 9:
        printf("doksan");
        break;
    case 8:
        printf("seksen");
        break;
    case 7:
        printf("yetmiş");
        break;
    case 6:
        printf("altmış");
        break;
    case 5:
        printf("elli");
        break;
    case 4:
        printf("kırk");
        break;
    case 3:
        printf("otuz");
        break;
    case 2:
        printf("yirmi");
        break;
    case 1:
        printf("on");
        break;
    }

    //Birler basamağını bulabilmek için, sayının
    //10'a bölümünden kalana bakıyoruz.

    //BİRLER BASAMAĞI:
    switch ((sayi % 10))
    {
    case 9:
        printf("dokuz");
        break;
    case 8:
        printf("sekiz");
        break;
    case 7:
        printf("yedi");
        break;
    case 6:
        printf("altı");
        break;
    case 5:
        printf("beş");
        break;
    case 4:
        printf("dört");
        break;
    case 3:
        printf("üç");
        break;
    case 2:
        printf("iki");
        break;
    case 1:
        printf("bir");
        break;
    }

    //Eğer sayı 0 ise, yukarda ki düzeneğe
    //uymayacağından, onu ayrıca ele alıyoruz.
    if (sayi == 0)
        printf("sıfır");

    printf("' şeklinde okunur.\n");

    return 0;
}