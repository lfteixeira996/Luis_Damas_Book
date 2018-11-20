/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	int val;
	int soma = 0;
	int prod = 1;

	printf("Insira um numero natural: ");
	scanf("%d", &val);

	
	for (int i = 1; i <= val; ++i)
	{
		soma += i;
		prod *= i;
	}


	printf("Soma dos numeros naturais: \t%d\n", soma );
	printf("Produto dos numeros naturais: \t%d\n", prod );


	return 0;
}
