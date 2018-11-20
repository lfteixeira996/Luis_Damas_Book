/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int Entre(int x, int lim_inf, int lim_sup);



int main(int argc, char const *argv[])
{
	int x, lim_sup, lim_inf;

	printf("Insira o valor de x: ");
	scanf("%d", &x);


	printf("Insira o limite inferior: ");
	scanf("%d", &lim_inf);


	printf("Insira o limite superior: ");
	scanf("%d", &lim_sup);


	if (Entre(x, lim_inf, lim_sup))
	{
		printf("O valor %d encontra-se no entrevalo %d e %d\n", x, lim_inf, lim_sup);
	}
	
	else
	{
		printf("O valor não se encontra no intervalo\n");
	}

	return 0;
}


int Entre(int x, int lim_inf, int lim_sup)
{

	if((x >= lim_inf) && (x <= lim_sup))
		return 1;

	return 0;

}
