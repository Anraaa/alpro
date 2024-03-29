#include <stdio.h>

int main(){
	int tinggi, baris, kolom, k;
	
	printf("Masukkan tinggi segitiga: ");
	scanf("%d", &tinggi);
	
	for(baris = 1; baris <= tinggi; baris++){
		for (k = tinggi - baris; k > 0; k--){
			printf("_");
		} 
		for (kolom = 0; kolom <= baris; kolom++){
			printf("*");
		} printf("\n");
	}
	return;
}
