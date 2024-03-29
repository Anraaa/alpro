#include "stdio.h"
#include "stdlib.h"
#include "lib.MinMax.h"
#include "prc.MinMax.c"

void main()
{
	int N;
	printf("========||Program Mencari Nilai Min & Max||========\n");
	printf("Masukkan Banyak Array : ");
	scanf("%d", &N);
	
	printf("====================================================\n");
	printf("Input Array\n");
	printf("====================================================\n");
	
	minmax(N);
	
	getchar();
	
	return 0;
	
}

