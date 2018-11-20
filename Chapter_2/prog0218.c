/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "stdio.h"


int hour_cal(int sec);
int min_cal(int sec);


int main(int argc, char const *argv[])
{
	int sec, sec1, sec2; 

	printf("Insira o numero de segundos: ");
	scanf("%d", &sec);


	printf("Hours = %d\n", hour_cal(sec));

	sec1 = sec - hour_cal(sec)*3600;

	printf("Minutes = %d\n", min_cal(sec1));

	sec2 = sec1 - min_cal(sec1)*60;

	printf("Seconds = %d\n", sec2);




	return 0;
}


int hour_cal(int sec)
{
	return sec/3600;
}


int min_cal(int sec1)
{
	return sec1/60;
}
