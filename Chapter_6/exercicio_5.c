/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>
#include "exercicio5.h"






int main(int argc, char const *argv[])
{
	char dest[10] = {};
	char ori[] = {"luis"};

	int n = 2;

	printf("PALAVRA: %s\n", MEMCPY(dest, ori, n) );





	return 0;
}
