/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "stdlib.h"
#include "string.h"


int main(int argc, char const *argv[])
{
	FILE *pFile;
	char mystring[20];
	int val1, val2, res;
	int total = 0;
	char op;

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

	
	while(fscanf(pFile, "%d%c%d", &val1, &op, &val2) == 3)
	{
		
		switch(op)
		{
			case '+': 	res = val1 + val2;
						break;

			case '-':	res = val1 - val2;
						break;

			case '*': 	res = val1 * val2;
						break;

			case '/':	res = val1 / val2;
						break;
		}		

		total = total + res;
  		printf("%d %c %d = %d\n", val1, op, val2, res );
  	
		
	}
	
	printf("Resultado global: %d\n", total);
	fclose(pFile);
	


	return 0;
}
