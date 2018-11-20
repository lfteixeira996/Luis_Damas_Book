/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>
#include "exercicio5.h"



int main(int argc, char const *argv[])
{
	char vect1[] = {"lUis"};
	char vect2[] = {"luis"};

	int n = 3;

	if(MEMICMP(vect1, vect2, n))
	{
		printf("Tem os n=%d iguas\n", n);
	}

	else
	{
		printf("Nao sao iguais!!\n");
	}



	return 0;
}
