/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int main(int argc, char const *argv[])
{
	
	float salary;
	float tax = 0.0;
	char genero;

	printf("Insira o ordenado: ");
	scanf("%f", &salary);

	puts("Genero:");
 	scanf(" %c", &genero);

	switch(genero)
	{
			
		case 'M':
		case 'm':	tax += 0.05;

		case 'F':
		case 'f':  	tax += 0.10;
		
	}


	printf("----------------------------------\n");
	printf("Salario Bruto: \t\t%.2f\n", salary);
	printf("Taxa de imposto: \t%.2f\n", tax);
	printf("Salario Liquido: \t%.2f\n", salary-(salary*tax));
	printf("----------------------------------\n");
	



	return 0;
}
