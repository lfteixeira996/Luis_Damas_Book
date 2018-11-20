/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>

//verifica se o parametro n e ou nao zero
int iszero(int n)
{
	if(n == 0)
		return 1;

	return 0;
}


//adiciona 1 ao proprio parametro n
void add1(int *ptr)
{
	*ptr = *ptr + 1;
}


//coloca zero no parametro n
void zero(int *ptr)
{
	*ptr = 0;
}


int main(int argc, char const *argv[])
{
	int x;
	int *ptr;

	printf("Insert a value: ");
	scanf("%d", &x);

	ptr = &x;

	printf("-----------------------------------\n");
	printf("iszero function\n");
	if (iszero(x))
	{
		printf("iszero function output: TRUE\n");
	}
	else
	{
		printf("iszero function output: FALSE\n");
	}
	printf("-----------------------------------\n");
	

	printf("-----------------------------------\n");
	printf("add1 function\n");
	add1(ptr);
	printf("add1 function output: %d\n", x);
	printf("-----------------------------------\n");
	
	printf("-----------------------------------\n");
	printf("zero function\n");
	zero(ptr);
	printf("zero function output: %d\n", x);
	printf("-----------------------------------\n");
	


	return 0;
}
