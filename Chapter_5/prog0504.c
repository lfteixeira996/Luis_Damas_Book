/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



void linha3x()
{

	for (int i = 0; i < 3; ++i)
	{
		printf("*");
	}

	printf("\n");
}

void linha5x()
{

	for (int i = 0; i < 5; ++i)
	{
		printf("*");
	}

	printf("\n");
}


void linha7x()
{

	for (int i = 0; i < 7; ++i)
	{
		printf("*");
	}

	printf("\n");
}



int main(int argc, char const *argv[])
{
	
	linha3x();

	linha5x();

	linha7x();

	linha5x();

	linha3x();


	return 0;
}
