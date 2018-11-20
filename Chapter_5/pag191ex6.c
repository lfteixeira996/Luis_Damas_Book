/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  

#include "stdio.h"



long int n_segundos(int n_horas);


int main(int argc, char const *argv[])
{
	int n_horas;

	printf("Insira o numero de horas: ");
	scanf("%d", &n_horas);

	printf("n_segundos(%d) = %ld\n", n_horas, n_segundos(n_horas));

	return 0;
}



long int n_segundos(int n_horas)
{

	return 3600*n_horas;
}
