/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"




int main(int argc, char const *argv[])
{
	FILE *file;

	file = fopen("teste.txt", "r");

	if(file == NULL)
	{
		printf("NÃO E POSSIVEL ABRIR O FICHEIRO\n");
	}

	else
	{
		printf("FICHEIRO ABERTO!\n");
		fclose(file);
	}


	return 0;
}
