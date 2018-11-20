/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "ch7func3.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>



//devolve o n_esimo caracter da string
char n_esimo(char *s, int n)
{

	n--;

	for (int i = 0; i < strlen(s); ++i)
	{
		if(i==n)
			return s[i];
	}

}


//Recebe uma string e compacta num unico caracter qualquer conjunto de caracteres repetidos consecutivos
char *strpack(char *s)
{

	char array[strlen(s)];
	int i = 0;

	array[0] = *s;
	s++;

	while(*s != '\0')
	{
		if(*s != array[i])
		{			
			i++;
			array[i] = *s;			
		}

		s++;
	}

	array[++i] = '\0';

	s = array;

	return s;

}


//coloca um espaco depois de cada caractere NAO ESPACO na string s
char *xspace(char *s)
{
	char *ptr = s;
	char array[strlen(s)];
	int j = 0;

	for (int i = 0; i < strlen(s); ++i)
	{
		
		array[j]   = *ptr;
		array[++j] = ' ';
		ptr++;
		j++;
	}

	array[j] = '\0';
	s = array;

	return s;
}



//devolve o caracter com maior codigo ASCII presente na string str
//se a string estiver vazia devolve \0
char Max_Ascii(char *str)
{
		
	int max = (int) *str;
	char ret = *str;

	if(strlen(str) == 0)
		return '\0';


	str++;
	while(*str != '\0')
	{
		if(max < (int) *str)
			ret = *str;

		str++;	 
	}


	return ret;
}


//coloca em cada poosicao da string s o proximo carater ASCII
char *Prox_Char(char *s)
{
	char str[strlen(s)];
	int i = 0;

	while(*s != '\0')
	{
		str[i] = (int) *s + 1;	
		s++;
		i++;
	}
	
	str[i] = '\0';
	s = str;

	return s;

}



//coloca um espaco depois de cada caractere NAO ESPACO na string s
char *UpDown(char *s)
{

	char array[strlen(s)];
	int j = 0;

	while(*s != '\0')
	{
		array[j]   = toupper(*s);
		s++;
		array[++j] = tolower(*s);
		s++;
		j++;
	}

	array[j] = '\0';
	s = array;

	return s;
}

//substitui todos os caracteres da string s por espacos em branco
char *allspaces(char *s)
{
	char str[strlen(s)];
	int i = 0;

	while(*s != '\0')
	{
		str[i] = ' ';	
		s++;
		i++;
	}
	
	str[i] = '\0';
	s = str;

	return s;

}



/*char *strijset(char *s, int i, int j, char ch)
{
	char *ptr 	= s;
	int init 	= (int) ptr + i;
	int fim 	= (int)ptr + j;
	
	while(*ptr != '\0')
	{
		ptr 
	}



	return ptr;
}*/


//Verifica se o comprimento da string e igual ao valor enviado a funcao
void Is_Len_OK(char *string, int comprimento)
{
	int len = 0;


	while(*string != '\0')
	{
		len++;
		string++;
	}

	if(len == comprimento)
		printf("VERDADEIRO\n");

	else
	{
		printf("FALSO\n");
	}
}
