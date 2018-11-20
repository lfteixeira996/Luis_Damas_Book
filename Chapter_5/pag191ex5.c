/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


float Pot(float x, int n);
float VAL(float x, int n, float t);


int main(int argc, char const *argv[])
{
	int n;
	float x, t;



	printf("Insira o numero de anos n: ");
	scanf("%f", &n);


	printf("Insira a taxa t: ");
	scanf("%d", &t);

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
