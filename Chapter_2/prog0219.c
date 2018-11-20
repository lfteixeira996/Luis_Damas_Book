/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int main(int argc, char const *argv[])
{
	

	float x;
	float frac;

	printf("Insira um valor real: ");
	scanf("%f", &x);


	printf("Parte inteira: %d\n", (int) x);

	frac = x - (int) x;

	printf("Parte fracionaria: %f\n", frac);


	return 0;
}
