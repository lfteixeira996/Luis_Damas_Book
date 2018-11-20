/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  

#include <stdio.h>
#include <ctype.h>
#include <string.h>




//retorna o indereco da ultima ocorrencia de ch em s, 
//caso nao exista, retorna NULL
char *strrchr_new(char *s, char ch)
{
	char *ptr = NULL;

	while(*s != '\0')
	{
		if(*s == ch)
		{
			ptr = s;
		}

		s++;
	}

	return ptr;
}


//retorna 1 se o carater for uma vogal
int isVogal(char c)
{
	char c1 = tolower(c);

	if(c1 == 'a' || c1 == 'e' || c1 == 'i' || c1 == 'o' || c1 == 'u')
		return 1;

	return 0;
}

//retorna o indereco em k ocorre pela primeira vez uma vogal, 
//caso nao exista, retorna NULL
char *First_Vogal(char *s)
{
	char *ptr = NULL;

	while(*s != '\0')
	{
		if(isVogal(*s))
		{
			ptr = s;
			return ptr;
		}

		s++;
	}

	return ptr;
}



//insere a string orig no inicio da string dest, devolvendo dest
char *strins(char *dest, char *orig)
{

	char *ptr  = orig;
	char *ptr1 = dest; 

	ptr = ptr + strlen(orig);
	//ptr++;

	while(*ptr1 != '\0')
	{
		*ptr = *ptr1; 
		ptr++;
		ptr1++;
	}

	*ptr = '\0';

	dest = orig;

	return dest;
}


//apaga todos os caracteres maiusculos em s
char *StrDelUpper(char *str)
{
	char new[strlen(str)];
	char *ptr = new;

	while(*str != '\0')
	{

		if(islower(*str))
		{
			*ptr = *str;
			ptr++;
		}

		str++;
	}

	ptr++;
	*ptr = '\0';

	str = new;

	return str;
}






int main(int argc, char const *argv[])
{
	char str4[] = {"lUIs TEIxeiRa"};
	char str[] 	= {"luis TEIxeira"};
	char str2[] = {"Universidade"};
	char str3[] = {"Autonoma"};
	char c 		= 's'; 

	printf("/----------------------------------------------/\n");
	printf("Exercicio 3\n");
	printf("Endereço inicial: \t\t%p\n", str);
	printf("Endereço da ocurrencia de %c: \t%p\n", c, strrchr_new(str,c));
	printf("/----------------------------------------------/\n");
	

	printf("/----------------------------------------------/\n");
	printf("Exercicio 5\n");
	printf("Endereço inicial: \t\t\t\t%p\n", str);
	printf("Endereço da ocurrencia da primeira vogal: \t%p\n", First_Vogal(str));
	printf("/----------------------------------------------/\n");
	
	/*printf("/----------------------------------------------/\n");
	printf("Exercicio 6\n");
	printf("String inicial: %s\n", str2);
	printf("String destino: %s\n", str3);
	printf("Output		  : %s\n", strins(str3, str2));	
	printf("/----------------------------------------------/\n");
	*/

	printf("/----------------------------------------------/\n");
	printf("Exercicio 8\n");
	printf("String inicial: %s\n", str4);
	printf("Output		  : %s\n", StrDelUpper(str4));	
	printf("/----------------------------------------------/\n");
	





	return 0;
}
