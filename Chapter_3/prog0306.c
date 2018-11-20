/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"




int main(int argc, char const *argv[])
{
	
	float salary;

	printf("Insira o seu salário: ");
	scanf("%f", &salary);


	if (salary <= 0)
	{
		printf("ERROR: salario negativo ou zero!!\n");
	}


	else if(salary > 1000)
	{
		printf("Para um salario de %.1f euros paga 10%% de imposto, %.1f euros \n", salary, (salary*0.10));
	}

	else
	{
		printf("Para um salario de %.1f euros paga 5%% de imposto, %.1f euros \n", salary, (salary*0.05));
	}


	return 0;
}
