/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>
#include <ctype.h>



int memcmp_aux(char *s1, char *s2, int n);
int memicmp_aux(char *s1, char *s2, int n);





int main(int argc, char const *argv[])
{
	
	char *s1 = "luisteixeira";
	char *s2 = "luisTEIXEIRo";



	if(memicmp_aux(s1, s2, 12))
		printf("Different\n");

	else
		printf("EQUAL\n");




	return 0;
}




/*
*	que verifica se as n primeiras posicoes dos
*	vetores s1 e s2 sao ou nao iguais
*
*	return 0 if equal
* 	return 1 if different
*
*/
int memcmp_aux(char *s1, char *s2, int n)
{
	int ret = 0;

	for (int i = 0; i < n; ++i)
	{
		if(*s1 != *s2)
			return ret = 1;

		s1++;
		s2++;
	}

	return ret;
}




/*
*	que verifica se as n primeiras posicoes dos
*	vetores s1 e s2 sao ou nao iguais (ignore case)
*
*	return 0 if equal
* 	return 1 if different
*
*/
int memicmp_aux(char *s1, char *s2, int n)
{
	int ret = 0;

	for (int i = 0; i < n; ++i)
	{
		if(tolower(*s1) != tolower(*s2))
			return ret = 1;

		s1++;
		s2++;
	}

	return ret;
}
