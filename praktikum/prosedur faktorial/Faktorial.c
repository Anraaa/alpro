#include "stdio.h"
#include "stdlib.h"
#include "lib.Faktorial.h"
#include "prc.Faktorial.c"

void main()
{
	int num;
    printf("Masukkan bilangan untuk dihitung faktorial: ");
    scanf("%d", &num);
    
    faktorial(num);
    getchar();
	
}

