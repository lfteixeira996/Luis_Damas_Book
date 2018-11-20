/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include "exercicio5.h"
#include <ctype.h>


char *MEMCPY(char *dest, char *ori, int n)
{
	//using pointers
	char *dest1 = dest;
	char *ori1  = ori; 

	for (int i = 0; i < n; ++i)
	{
		*dest1 = *ori1;

		dest1++;
		ori1++;
	}

	*dest1 = '\0';

	return dest;
	

	//using array
	/*
	for (int i = 0; i < n; ++i)
	{
		dest[i] = ori[i];
	}

	return dest;*/

}





int MEMCMP(char *s1, char *s2, int n)
{

	for (int i = 0; i < n; ++i)
	{
		if (s1[i] != s2[i])
		{
			return 0;				//false --> if charaters different
		}
	}

	return 1;						//true --> if charaters equal

}



int MEMICMP(char *s1, char *s2, int n)
{

	for (int i = 0; i < n; ++i)
	{
		if (toupper(s1[i]) != toupper(s2[i]))
		{
			return 0;				//false --> if charaters different
		}
	}

	return 1;						//true --> if charaters equal



}
