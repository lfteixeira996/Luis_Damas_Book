/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int main(int argc, char const *argv[])
{
	
	int x;


	do 
	{
		printf("Insira um valor: ");
		scanf("%d", &x);

	}while((x < 1) || (x > 100));



	return 0;
}
