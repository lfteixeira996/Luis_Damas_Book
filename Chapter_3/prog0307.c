/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	float bruto;
	float liq, tax;

	printf("Insira o salario bruto: ");
	scanf("%f", &bruto);


	if (bruto <= 0)
	{
		printf("----------------------------------\n");
		printf("ERROR: salario negativo ou zero\n");
		printf("----------------------------------\n");
		return 0;
	}


	else if(bruto < 1000)
	{
		printf("----------------------------------\n");
		printf("Salario bruto: \t\t%.1f\n", bruto);
		printf("Imposto: \t\t5%%\n");
		printf("Salario liquido: \t%.1f\n", (bruto-(bruto*0,05)));
		printf("----------------------------------\n");
		return 0;
	}

	else if((bruto >= 1000) && (bruto < 5000))
	{
		printf("----------------------------------\n");
		printf("Salario bruto: \t\t%.1f\n", bruto);
		printf("Imposto: \t\t11%%\n");
		printf("Salario liquido: \t%.1f\n", (bruto-(bruto*0,11)));
		printf("----------------------------------\n");
		return 0;
	}

	
	else
	{
		printf("----------------------------------\n");
		printf("Salario bruto: \t\t%.1f\n", bruto);
		printf("Imposto: \t\t35%%\n");
		printf("Salario liquido: \t%.1f\n", (bruto-(bruto*0,35)));
		printf("----------------------------------\n");
	}



	return 0;
}
