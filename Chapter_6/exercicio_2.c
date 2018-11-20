/************************************  
 Author : Luis Teixeira  
 Date   : 19-11-2018  
 E-Mail : filipe.teixeira.996@gmail.com  
************************************/  
#include <stdio.h>



float max(float v[], int n)
{
	float max = v[0];
		
	for (int i = 1; i < n; ++i)
	{
		if(v[i] > max)
			max = v[i];
	}

	return max;

}






int main(int argc, char const *argv[])
{
	float array[] = {1.0, 89.3, 2.8, 4, 79.5, 100};
	int n = 5;

	printf("Max %.1f value for n = %d\n", max(array, n), n);

	return 0;
}
