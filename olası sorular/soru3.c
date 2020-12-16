/*
Hasan Hüseyin Harmancı
İki tam sayı alacak ve verilecek operatöre göre 
(+, -, *, /, %) işlem yapacak bir program yazınız.
*/

#include <stdio.h>
int main()
{
    int sayi1, sayi2; // int veri tipinde 2 değişken olusturduk
    char secim;       //char veri tipinde değişken olusturduk
    printf("Lütfen işlem simgesi giriniz> ");
    scanf("%c", &secim); //klavyeden alıgımız degeri secım adlı degişkene attık
    printf("Lütfen birinci sayıyı giriniz> ");
    scanf("%d", &sayi1);                      //klavyeden alıgımız degeri sayi1 adlı degişkene attık
    printf("Lütfen ikinci sayıyı giriniz> "); //klavyeden alıgımız degeri sayi2 adlı degişkene attık
    scanf("%d", &sayi2);
    switch (secim)
    {         // klavyeden yazdıgımız degeri switch ile sorguluyoruz
    case '+': // secım degeri + oldugunda asagıdaki kod çalısacaktır
        printf("%d %c %d = %d\n", sayi1, secim, sayi2, sayi1 + sayi2);
        break;
    case '-': // secım degeri - oldugunda asagıdaki kod çalısacaktır
        printf("%d %c %d = %d\n", sayi1, secim, sayi2, sayi1 - sayi2);
        break;
    case '%': // secım degeri % oldugunda asagıdaki kod çalısacaktır
        printf("%d %c %d = %d\n", sayi1, secim, sayi2, sayi1 % sayi2);
        break;
    case '*': // secım degeri * oldugunda asagıdaki kod çalısacaktır
        printf("%d %c %d = %d\n", sayi1, secim, sayi2, sayi1 * sayi2);
        break;
    case '/': // secım degeri / oldugunda asagıdaki kod çalısacaktır
        printf("%d %c %d = %.2f\n", sayi1, secim, sayi2, (float)sayi1 / sayi2);
        break;
    default: // yukarıdakı degerlerden baska deger secıldıgınde asagıdakı kod calısacaktır
        printf("HATA: Tanımsız bir operatör girdiniz!\n");
    }
    return 0;
}
