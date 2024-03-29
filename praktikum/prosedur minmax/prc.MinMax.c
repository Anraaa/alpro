#include "MinMax.h"

void minmax(int N)
{
	int i, j, k;
	int nilai[100];
	
	int min, maks;
	int besar, kecil;
	
	for (i = 0; i < N; i++)
	{
		printf("Aray ke-%d: ", i+1);
		scanf("%d", &nilai[i]);
	}
	
	printf("============================\n");
	
	min = nilai[0];
	for (j = 1; j < N;j++)
	{
		if (nilai[j] < min)
		{
			min = nilai[j];
		}
	}
	
	maks = nilai[0];
	for (k = 1; k < N;k++)
	{
		if (nilai[k] > maks)
		{
			maks = nilai[k];
		}
	}
	
	besar = maks;
	kecil = min;
	
	printf("Max = %d\n", besar);
	printf("Min = %d\n", kecil);
}
