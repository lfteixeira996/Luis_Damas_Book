/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>

const int n = 10;

float max(float v[], int n);


int main(int argc, char const *argv[])
{
	float vect[n];

	printf("Exercise 2\n");
	for (int i = 0; i < n; ++i)
	{
		printf("Insert a value for the vector and press enter\n");
		scanf("%f", &vect[i]);
	}

	printf("Max value: %.2f\n", max(vect, n));




	return 0;
}

float max(float v[], int n)
{
	int max = v[0];

	for (int i = 1; i < n; ++i)
	{
		if(v[i] > max)
			max = v[i];
	}

	return max;
}
