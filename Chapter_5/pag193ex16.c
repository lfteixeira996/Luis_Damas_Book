/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>


int IsVogal(char ch)
{
	char mini[] = {'a','e','i','o','u'};
	char mai[] = {'A','E','I','O','U'};


	for(int i = 0; i<5; i++)
	{
		for (int x = 0; x < 5; ++x)
		{
			if(ch == mai[x])
			{
			return 1;
			}
		}


		if(ch == mini[i])
		{
			return 1;
		}
	}

	return 0;

}


int main(int argc, char const *argv[])
{
		char ch;

		printf("Insira um character: ");
		ch = getchar();

		if(IsVogal(ch))
		{
			printf("O caracter é uma vogal\n");
		}

		else
		{
			printf("O caracter não é uma vogal\n");
		}	

	return 0;
}
