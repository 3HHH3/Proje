/*
Aşağıdaki çıktıyı üreten programı while dön. yazınız:
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main( void )
{
	int i=0,j;
	while( i < 5 ) {
		j = 0;
		while( j < i+1 ) {
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}