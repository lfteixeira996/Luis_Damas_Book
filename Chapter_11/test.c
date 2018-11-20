/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "string.h"


struct Pessoa
{
	char nome[30];
	int idade;
};




void fill(struct Pessoa *x)
{
	printf("Nome: ");
	scanf("%s", x->nome);


	printf("Idade: ");
	scanf("%d", &x->idade);
}

int main()
{

struct Pessoa luis; 
struct Pessoa adriana;

	
	fill(&luis);

	printf("some stuff\n");
	fill(&adriana);


	printf("%s\n", luis.nome);
	printf("%d\n", luis.idade );


	printf("%s\n", adriana.nome);
	printf("%d\n", adriana.idade );


	return 0;
}
