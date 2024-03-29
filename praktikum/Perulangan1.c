#include <stdio.h>

int main(){
	int awal = 1, batas;
	
	printf("Masukkan batas perulangan: ");
	scanf("%d", &batas);
	
	do {
		printf("Aqla Harun R.\n");
		awal++;
	} while(awal <= batas);
} 
