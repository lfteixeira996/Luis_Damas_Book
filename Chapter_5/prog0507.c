/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int soma(int a, int b)
{
	return a + b;
}


int dobro(int x)
{
	return 2*x;
}



int main(int argc, char const *argv[])
{
	int a, b;

	printf("Insira um valor: ");
	scanf("%d", &a);

	printf("Insira outro valor: ");
	scanf("%d", &b);

	printf("Soma: %d + %d = %d\n", a, b, soma(a,b) );

	printf("Dobro de: %d = %d\n", a, dobro(a) );

	printf("Dobro de: %d = %d\n", b, dobro(b) );


	return 0;
}
