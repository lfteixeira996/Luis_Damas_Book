/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



void linha(int x)
{

	for (int i = 1; i <= x; ++i)
	{
		printf("*");
	}

	printf("\n");
}




int main(int argc, char const *argv[])
{
	
	linha(3);

	linha(5);

	linha(7);

	linha(5);

	linha(3);


	return 0;
}
