/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "stdlib.h"




int main(int argc, char const *argv[])
{
	int x,y;

	printf("Insira o valor de x\n");
	scanf("%d", &x);

	printf("Insira o valor de y\n");
	scanf("%d", &y);

	printf("Resultado de \tx+y\t=\t%d\n", (x+y));
	printf("Resultado de \tx-y\t=\t%d\n", (x-y));
	printf("Resultado de \tx*y\t=\t%d\n", (x*y));
	printf("Resultado de \tx/y\t=\t%d\n", (x/y));
	printf("Resultado de \tx%%y\t=\t%d\n", (x%y));
	
	
	




	return 0;
}
