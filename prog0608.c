/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>


const int n=10;


int main(int argc, char const *argv[])
{

	int vect[n];


	for (int i = 0; i < n; ++i)
	{
		vect[i] = i*(n-i);
	}

	printf("Vector\n");
	for (int i = 0; i < n; ++i)
	{
		printf(" %d", vect[i]);
	}	


	printf("\n");

	return 0;
}
