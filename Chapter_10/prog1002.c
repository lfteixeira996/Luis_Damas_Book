/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"

int main(int argc, char const *argv[])
{
	int nota;
	char nome[100];
	FILE *file = fopen("prog1002.txt", "r");


	while((fscanf(file, "%s %d", nome, &nota)) != EOF)
	{
		if(nota >= 10)
			printf("Nome: %s  --> Nota: %d\n",nome, nota );

	}

	fclose(file);


	return 0;
}
