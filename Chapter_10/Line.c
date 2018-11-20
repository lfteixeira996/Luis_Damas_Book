/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "stdlib.h"


int main(int argc, char const *argv[])
{
	FILE *pFile;
	char mystring[20];
	int i = 1;

	if(argc == 1)
	{
		printf("No file inserted!!!\n");
		exit(1);
	}

	if((pFile = fopen(argv[1], "r")) == NULL)
	{
		printf("Ficheiro nao existe\n");
		exit(1);
	}

	
	while(fgets (mystring , 100 , pFile) != NULL)
	{
		printf("%2d: %s", i, mystring );
		i++;
	}
	printf("\n");

	fclose(pFile);
	


	return 0;
}
