/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	int x = 1;

	printf("      ----Tabuada dos 5----\n");

	while(x <= 10)
	{
		printf("\t5 * %d \t= \t%d\n", x, (5*x) );

		x++;
	}


	return 0;
}
