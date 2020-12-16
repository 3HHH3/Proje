/*
Fibonacci serisinin ilk iki elemanı 0 ve 1'dir. 
Bundan sonra gelen sayılar, kendisinden önceki 
iki sayının toplamıyla bulunur. Yani seri 
elemanları 0 1 1 2 3 5 8 13 21 ... şeklinde gitmektedir. 
Verilecek adım sayısına göre, Fibonnaci serisinin 
elemanlarını gösterecek bir program yazınız.
*/
#include <stdio.h>
int main(void)
{
    int a = 0; /* a[n]   */
    int b = 1; /* a[n+1] */
    int c;     /* a[n+2] */
    int n;
    int i;

    printf("Fibonacci serisi kacinci elemana kadar yazilsin> ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
 /* i degeri yazdıgımız n degerinden küçük veya eşit olduğu sürece döngü çalışacak ve i degerini her döngü tekrarında bir artacaktır */
    {
        printf("%4d. Eleman: %d\n", i, a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
