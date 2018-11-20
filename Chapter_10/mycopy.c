/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"




int main(int argc, char const *argv[])
{
	FILE *file1;
	FILE *file2;
	char c;

	file1 = fopen("teste2.txt","rb");
	file2 = fopen("teste4.txt", "ab");

	while((c = fgetc(file1) != EOF))
	{
		fputc(c, file2);
	}
		

	fclose(file1);
	fclose(file2);

	return 0;
}
