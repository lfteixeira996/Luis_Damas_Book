/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "string.h"


typedef struct Pessoa 
{
	char nome[31];
	int idade;
	char sexo;
	char profissao[31];

}PESSOA;


void cria_reg()
{
	struct Pessoa luis;

	printf("Nome: ");
	gets(luis.nome);

	printf("Idade: ");
	scanf("%d", luis.idade);

	printf("Sexo: ");
	scanf("%c", luis.sexo);

	printf("Profissao: ");
	gets(luis.profissao);
}

void le_reg(PESSOA x)
{
	printf("Nome: %s", x.nome);
	printf("Idade: %d", x.idade);
	printf("Sexo: %c", x.sexo);
	printf("Profissao: %s", x.profissao);

}



int main(int argc, char const *argv[])
{
	struct Pessoa luis;

	cria_reg();	

	//le_reg(luis);

	return 0;
}
