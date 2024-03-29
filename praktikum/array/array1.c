#include <stdio.h>
#include <stdlib.h>

void main(){
	int i, a[10];
	
	// Perulangan Untuk Pengambilan Data
	for (i=1; i<=5; i++){ 
		printf("A[%d] : ", i);
		scanf("%d", &a[i]);
	}
	printf("\n\n\n");
	
	// Perulangan Untuk menampilkan Data
	for (i=1; i<=5; i++){
		printf("A[%d] : %d\n", i, a[i]);
	}
	getch();
}
