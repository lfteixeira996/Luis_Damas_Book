/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"




int main(int argc, char const *argv[])
{
	
	int h;

	printf("Insira o numero de horas: ");
	scanf("%d", &h);

	if(h <= 0)
	{
		printf("ERROR: INVALID DATA\n");
	}

	else
	{
		printf("%d horas tem %ld segundos\n", h, h* (long)3600 );
	}


	return 0;
}
