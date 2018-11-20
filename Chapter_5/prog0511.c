/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


float Pot(float x, int n);


int main(int argc, char const *argv[])
{
	int n;
	float x;


	printf("Output of the program x^n\n");

	printf("Insert the value of x: ");
	scanf("%f", &x);


	printf("Insert the value of n: ");
	scanf("%d", &n);

	printf("O valor de %.1f^%d = %.1f\n", x, n, Pot(x, n));


	return 0;
}



float Pot(float x, int n)
{

	float value = 1.0;

	if(n == 0)
		return value;


	for (int i = 0; i < n; ++i)
	{

		value *= x;

	}

	return value;

}
