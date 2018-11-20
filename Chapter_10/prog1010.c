/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"



int main(int argc, char const *argv[])
{
	FILE *pFile = fopen("myfile.txt", "w");
	int i = 0;
	float v[10];

	while(i<10)
	{
		printf("Introdu. o %d-esimo Nº real: ", (i+1) );
		scanf("%f", &v[i]);
		i++;
	}

	fwrite(v, sizeof(float), sizeof(v), pFile);

	printf("Elemento desejado: \n");
	scanf("%d", &i);

	printf("Output %d elemento: %.1f\n", i, (float)fseek(pFile, i, SEEK_SET));

	fclose(pFile);

	return 0;
}
