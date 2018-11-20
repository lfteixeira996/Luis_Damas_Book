/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>


int Ler_Inteiro(char *prompt)
{
	int x;
	

	do 
	{
		printf("%s", prompt);
		scanf("%d", &x);
	
	}while(x < 0);

	return x;

}





int main(int argc, char const *argv[])
{
	char prompt[] = {"Insert an integer: "};
	
	int val = Ler_Inteiro(prompt);
	
	printf("Read Value: %d\n", val);


	return 0;
}
