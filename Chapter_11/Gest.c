/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"

#define registos 5

/*Global variables*/
int i = 0;


/*Structure*/
typedef struct 
{
	int idade;
	char sexo;
	char nome[100];
}Pessoa;



int print_menu(void)
{
	int x;

	printf("\n---------------------------\n");
	printf("1. Inserir registo\n");
	printf("2. Alterar registo\n");
	printf("3. Apaga ultimo registo\n");
	printf("4. Listar registo\n");
	//printf("5. Pesquisas\n");
	printf("0. Sair\nOPCAO: ");
	scanf("%d", &x);
	printf("\n---------------------------\n");
	return x;
}


void Inserir(Pessoa *ptr)
{
	
	printf("Insira o nome: ");
	scanf("%s", ptr->nome);

	printf("Insira o sexo: ");
	scanf(" %c", &ptr->sexo);
	
	printf("Insira a idade: ");
	scanf("%d", &ptr->idade);
	printf("\n---------------------------\n");
	
	i++;
}


void Lista(Pessoa *ptr2)
{
	for (int z = 0; z < i; ++z)
	{
		printf("Pessoa %d\n", (z+1));

		printf("NOME: %s\nSEXO: %c\nIDADE: %d\n", ptr2[z].nome, ptr2[z].sexo, ptr2[z].idade );
	}
}


int main(int argc, char const *argv[])
{
	Pessoa x[registos];
	int op, reg;
	int del;

	do
	{
		op = print_menu();
		switch(op)
		{
			case 1: if(i >= registos)
					{
						printf("Não é posivel fazer mais registos!\n");
					}
					else
					{
						Inserir(&x[i]);
					}
					break;

			case 2:	printf("Registo a alterar? ");
					scanf("%d", &reg);
					if(reg >= i)
					{
						printf("Registo nao existe\n");
					}

					else
					{
						Inserir(&x[reg]);
					}
					break;

			case 3:	i--;
					break;

			case 4:	Lista(&x[0]);	
					break;

			case 0: break;		
		}

	} while (op != 0);	
	
	return 0;
}
