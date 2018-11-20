/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "ch7func.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>


//devolve o numero de carateres alfabeticos
int strcounta(char *c)
{
	int i = 0;
	int count = 0;

	do
	{
		if(tolower(c[i]) >= 'a' && tolower(c[i]) <= 'z')
		{
			count++;
		}

		i++;
	}while(c[i] != '\0');

	return count;
}


//torna a string vazia
char *init_str(char *s)
{
	char *ret = s;

	*ret = '\0';

 	return ret;
}


//Devolve o ultimo indice em que encontrou o caracter c em s. 
//Caso nao exista, devolve -1
int ult_ind_chr(char *s, char c)
{
	int ret = 0;
	int ret1 = -1;


	while(*s != '\0')
	{
		if(tolower(*s) == tolower(c))
		{
			ret1 = ret;
		}

		ret++;
		s++;
	}


	return ret1;
}


//coloca todos os caracteres str em minusculas
char *strlwr(char *s)
{
	char *run = s;

	while(*run != '\0')
	{
		*run = tolower(*run);
		run++;
	}

	return s;
}


//Coloca o caractere ch apenas nas primeiras n posicoes da string s
char *strnset(char *s, char ch, int n)
{

	for (int i = 0; i < strlen(s); ++i)
	{
		if(n >= i)
		{
			s[i] = ch;
		}
	}

	return s;

}


//realiza comparacao ignorando se os caracteres estao em maiusculas ou minusculas
int stricmp(char *s1, char *s2)
{
	if(strlen(s1) != strlen(s2))
		return 0;

	while(*s1 != '\0')
	{
		if(*s1 != *s2)
			return 0;

		s1++;
		s2++;
	}

	return 1;
	
}
