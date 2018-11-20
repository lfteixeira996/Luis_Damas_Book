/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>


float Exp(int n)
{
	float ret = 0;
	float aux;

	for (int i = 1; i <= n; ++i)
	{
		aux = (i/n);
		ret = ret + (1+aux)*(1+aux);
	}

	return ret;



}



int main(int argc, char const *argv[])
{
	int n;

	printf("Insert a value: ");
	scanf("%d", &n);

	printf("Exp(%d) = %.2f\n", n, Exp(n));

	return 0;
}
