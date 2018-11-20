/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"







int main(int argc, char const *argv[])
{
	int dia, mes, ano;

	printf("Insira o dia: ");
	scanf("%d", &dia);


	printf("Insira o mes: ");
	scanf("%d", &mes);


	printf("Insira o ano: ");
	scanf("%d", &ano);

	
	printf("%2d/%2d/%4d\n", dia, mes, ano);




	return 0;
}
