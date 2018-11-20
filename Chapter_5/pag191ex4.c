/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int ABS(int x);


int main(int argc, char const *argv[])
{
	int x;

	printf("Insira um valor: ");
	scanf("%d", &x);


	printf("Abs(%d) = %d\n", x, ABS(x) );



	return 0;
}




int ABS(int x)
{

	if(x >= 0)
	{
		return x;
	}


	return x*(-1);


}
