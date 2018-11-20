/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	int x = 1;
	int tab;

	printf("Insira a tabuada que deseja: ");
	scanf("%d", &tab);


	printf("      ----Tabuada dos %d----\n", tab);


	while(x <= 10)
	{
		printf("\t%d * %d \t= \t%d\n", tab, x, (tab*x) );

		x++;
	}


	return 0;
}
