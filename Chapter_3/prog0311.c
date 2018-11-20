/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	
	char civil;

	puts("Insira o estado civil: ");
	civil = getchar();


	switch(civil)
	{
		case 'c':
		case 'C':	printf("Casado\n");
					break;


		case 'S':
		case 's':	printf("Solteiro\n");
					break;


		case 'd':
		case 'D':	printf("Divorciado\n");
					break;


		case 'v':
		case 'V':	printf("Viuvo\n");
					break;


		default:	printf("ERROR: INVALID DATA\n");			
		
		
	}



	return 0;
}
