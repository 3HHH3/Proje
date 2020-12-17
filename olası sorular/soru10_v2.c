/*
Hasan Hüseyin Harmancı
Klavye kenar uzunluğu ile verilen değerlerin 
üçgen oluşturup oluşturmadığını öğrenen program c dili

17.11.2020
*/
#include <stdio.h>

int main()
{
    int sayi1, sayi2, sayi3; //kenara yazılacak  degisken degerleri


    //klavyeden yazdıgımız degerleri scanf ile okuduk ve sayi1, sayi2, sayi3 adlı degişkenlere atadık
    printf("Lütfen sırasıyla 3 kenar sayılarını yazınız: \n");
    scanf("%d%d%d", &sayi1, &sayi2, &sayi3);


/*eger (sayi1 + sayi2 > sayi3) ve (sayi1 + sayi3 > sayi2) ve (sayi2 + sayi3 > sayi1) 
kosulunu sagladıgında bu bir ücgendir yazdıracak ekrana

değilse bu bir ucgen degildir yazdıracaktır ekrana*/
    if ((sayi1 + sayi2 > sayi3) && (sayi1 + sayi3 > sayi2) && (sayi2 + sayi3 > sayi1))
    {
        printf("Bu bir üçgendir");
    }
    else
    {
        printf("Bu bir üçgen değildir");
    }

    return 0;
}