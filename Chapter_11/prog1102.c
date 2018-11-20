/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"
#include "string.h"



typedef struct 
{
	int idade;
	char sexo;
	char civil;
	char nome[100];
}Pessoa;


void mostrar(Pessoa x)
{
	printf("Nome: %s\n", x.nome);
	printf("Idade: %d\n", x.idade);
	printf("Sexo: %c\n", x.sexo);
	printf("Estado Civil: %c\n", x.civil);
}

void ler(Pessoa *ptr)
{
	printf("Insira o nome: ");
	scanf("%s", ptr->nome);

	printf("Insira a idade: ");
	scanf("%d", &ptr->idade);

	getchar();
	printf("Insira o sexo: ");
	scanf("%c", &(ptr->sexo));

	getchar();
	printf("Insira o civil: ");
	scanf("%c", &(ptr->civil));


}


int main(int argc, char const *argv[])
{
	Pessoa p = {25, 'M', 'S', "Luis Teixeira"};
	
	mostrar(p);
	puts("\n");
	ler(&p);
	mostrar(p);

	return 0;
}
