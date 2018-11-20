/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>
#include "ch7func.h"
#include "ch7func3.h"



int main(int argc, char const *argv[])
{
	char 	test[] 	= {"LUis"};
	char 	test1[] = {"LUisTeixeira"};
	int 	index	= 5;


	printf("/---------EX 2.1---------/\n");
	printf("Numero: %d\n\n",  strcounta(test));


	printf("/---------EX 2.2---------/\n");
	printf("String Limpa %s\n\n",  init_str(test));
	

	printf("/---------EX 2.3---------/\n");
	printf("Indice da letra:  %d\n\n",  ult_ind_chr(test1, 'y'));
	

	printf("/---------EX 2.4---------/\n");
	printf("String:  %s\n\n",  strlwr(test1));
	

	printf("/---------EX 2.5---------/\n");
	printf("Nova String:  %s\n\n", strnset(test1, '!', 50));


	printf("/---------EX 2.6---------/\n");
	printf("Strings sao iguais:  %d\n\n", stricmp("Luis", "Luis"));

	printf("/-------------------------EXERCICIOS 3-----------------------------/\n");
	printf("/---------EX 3.2---------/\n");
	printf("Indice %d da string LUisTeixeira: %c \n\n", index, n_esimo("LUisTeixeira", index));


	printf("/---------EX 3.3---------/\n");
	printf("String normal: LUUIISTEIXEIIRA --> COMPACT -->  %s\n\n", strpack("LUUIISTTTTEIIXEIIRA"));

	printf("/---------EX 3.5---------/\n");
	printf("String normal: LUIS --> COMPACT -->  %s\n\n", xspace("ERA UMA VEZ"));

	printf("/---------EX 3.6---------/\n");
	printf("%c \n\n", Max_Ascii("9 10"));


	printf("/---------EX 3.7---------/\n");
	printf("%s \n\n", Prox_Char("A8M0"));


	printf("/---------EX 3.9---------/\n");
	printf("%s \n\n", UpDown("Alfabeto Grego"));


	printf("/---------EX 3.10---------/\n");
	printf("!!%s!!\n\n", allspaces("Alfabeto Grego"));


	/*printf("/---------EX 3.11---------/\n");
	printf("!!%s!!\n\n", strijset("Anabela", 0, 2,'*'));
 	*/

	printf("/---------EX 3.17---------/\n");
    Is_Len_OK("LUIS", 4);

	return 0;
}
