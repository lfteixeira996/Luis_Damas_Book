/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>


//funcao iterativa
int Fib_It(int n)
{
	//if n==0 ou 1 return 1
	int ret;

	if(n==2)
	{
		return ret = 2;
	}


	else if(n > 2)
	{
		ret = ((n-1)*1 )+ ((n-2)*1);
	}

	return ret;

}

//funcao recursiva
int Fib_Rec(int n)
{
	if((n==0) || (n==1))
	{
		return 1;
	}

	return Fib_Rec(n-1) + Fib_Rec(n-2);

}



int main(int argc, char const *argv[])
{
	int n;

	printf("Funcao de Fibonacci\n");
	printf("Insert a value: ");
	scanf("%d", &n);
	printf("Output Iterativa: %d\n", Fib_It(n) );
	printf("Output Recursiva: %d\n", Fib_Rec(n) );


	return 0;
}
