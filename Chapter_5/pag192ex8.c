/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


float Max(float x, float w, float y);



int main(int argc, char const *argv[])
{
	float x, w, y;

	printf("Insira o valor de x: ");
	scanf("%f", &x);

	printf("Insira o valor de y: ");
	scanf("%f", &w);

	printf("Insira o valor de z: ");
	scanf("%f", &y);

	printf("O valor max é: %.1f\n", Max(x, w, y));

	return 0;
}


float Max(float x, float w, float y)
{
	float max = x;

	if(max < w)
		max = w;

	else if(max < y)
		max = y;

	return max;

}
