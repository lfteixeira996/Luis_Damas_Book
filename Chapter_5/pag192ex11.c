/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "ctype.h"


int Isdigit(char c);
int Isalpha(char c);
int Isalnum(char c);
int Islower(char c);
int Isupper(char c);
int Isspace(char c);
char Tolower(char c);
char Toupper(char c);




int main(int argc, char const *argv[])
{

	char ch = 'x';

	printf("Character: %c\n", ch);
	
	/********************************************/

	printf("---------------------------\n");
	printf("Isdigit\n");
	if (Isdigit(ch))
	{
		printf("É um digito!\n");
	}

	else
	{
		printf("Não é um digito\n");
	}


	/********************************************/

	printf("---------------------------\n");
	printf("Isalpha\n");
	if (Isalpha(ch))
	{
		printf("É uma letra do alfabeto!\n");
	}

	else
	{
		printf("Não é uma letra do alfabeto!\n");
	}


	/********************************************/

	printf("---------------------------\n");
	printf("Isalnum\n");
	if (Isalnum(ch))
	{
		printf("É uma letra do alfabeto ou digito!\n");
	}

	else
	{
		printf("Não é uma letra do alfabeto ou digito!\n");
	}

	/********************************************/

	printf("---------------------------\n");
	printf("Islower\n");
	if (Islower(ch))
	{
		printf("É uma letra minuscula!\n");
	}

	else
	{
		printf("Não é uma letra minuscula!\n");
	}

	/********************************************/

	printf("---------------------------\n");
	printf("Isupper\n");
	if (Isupper(ch))
	{
		printf("É uma letra maiuscula!\n");
	}

	else
	{
		printf("Não é uma letra maiuscula!\n");
	}

	/********************************************/

	printf("---------------------------\n");
	printf("Isspace\n");
	if (Isspace(ch))
	{
		printf("É um espaço ou TAB!\n");
	}

	else
	{
		printf("Não é um espaço ou TAB!\n");
	}

	/********************************************/

	printf("---------------------------\n");
	printf("Tolower\n");
	printf("%c para lower case %c\n", ch, Tolower(ch));
	
	/********************************************/

	printf("---------------------------\n");
	printf("Toupper\n");
	printf("%c para upper case %c\n", ch, Toupper(ch));
	




}


int Isdigit(char c)
{
	if((c >= '0') && (c <= '9'))
		return 1;

	return 0;
}


int Isalpha(char c)
{
	if((c >= 'A') && (c <= 'Z'))
		return 1;

	else if((c >= 'a') && (c <= 'z'))
		return 1;

	return 0;
}



int Isalnum(char c)
{
	if (Isdigit(c) || Isalpha(c))
	{
		return 1;
	}

	return 0;

}
int Islower(char c)
{
	if((c >= 'a') && (c <= 'z'))
		return 1;

	return 0;
}

int Isupper(char c)
{
	if((c >= 'A') && (c <= 'Z'))
		return 1;

	return 0;
}

int Isspace(char c)
{
	if(c == ' ' || c == '\t')
	{
		return 1;
	}

	return 0;
}

char Tolower(char c)
{
	return tolower(c);
}

char Toupper(char c)
{
	return toupper(c);
}
