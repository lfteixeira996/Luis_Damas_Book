/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int Impar(int x);



int main(int argc, char const *argv[])
{
	int x;

	printf("Insira o valor de x: ");
	scanf("%d", &x);

	if (Impar(x))
	{
		printf("O valor é Impar\n");
	}
	
	else
	{
		printf("O valor é Par\n");
	}

	return 0;
}


int Impar(int x)
{
	if((x%2) != 0 )
	{
		return 1;
	}

	return 0;
}
