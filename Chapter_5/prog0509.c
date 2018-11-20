/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int x_isdigit(char ch)
{
	if((ch >= '0') && (ch <= '9') )
		return 1;

	return 0;
}






int main(int argc, char const *argv[])
{
	char c;

	printf("Insira um carater: ");
	scanf("%c", &c);
	
	printf("%d\n", x_isdigit(c) );


	return 0;
}
