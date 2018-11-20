/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int main(int argc, char const *argv[])
{
	float bruto;
	char  civil;
	float tax1 = .09;
	float tax2 = .10;


	printf("Insira o seu salario bruto: ");
	scanf("%f", &bruto);


	printf("Insira o estado civil: C(casado) S(solteiro) ");
	
	scanf(" %c", &civil);

	
	switch(civil)
	{
		case 'c':
		case 'C':	printf("Imposto aplicado: \t10%%\n");
					printf("Salario liquido: \t%.1f\n", (bruto-(bruto*tax2)));
					break;


		case 's':
		case 'S':	printf("Imposto aplicado: \t9%%\n");
					printf("Salario liquido: \t%.1f\n", (bruto-(bruto*tax1)));
					break;

	
		default: 	printf("ERROR: INVALID DATA!!\n");			


	}
	

	return 0;
}
