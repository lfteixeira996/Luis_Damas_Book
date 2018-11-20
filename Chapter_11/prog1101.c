/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



struct Pessoa
{
	int idade;
	char sexo, civil;
	char nome[100];
};


void mostrar(struct Pessoa x)
{
	printf("Idade: %d\n", x.idade);
	printf("Sexo: %c\n", x.sexo);
	printf("Estado Civil: %d\n", x.civil);
	printf("Nome: %s\n", x.nome);



}


int main(int argc, char const *argv[])
{
	struct Pessoa luis = {25, 'M', 'S', "Luis Teixeira"};
	
	mostrar(luis);

	return 0;
}
