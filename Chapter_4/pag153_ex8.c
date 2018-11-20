/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	int ramos;
	int count = 1;

	printf("Insira o numero de ramos: ");
	scanf("%d", &ramos);


	for (int i = 0; i < ramos; ++i)
	{
		for (int x = 0; x < count; ++x)
		{
			printf("*");
		}

		count++;
		printf("\n");
		
	}

	return 0;
}
