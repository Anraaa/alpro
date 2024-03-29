#include <stdio.h>

int main(){
	int tinggi, baris, kolom;
	
	printf("Masukkan tinggi segitiga: ");
	scanf("%d", &tinggi);
	
	for(baris = 0; baris < tinggi; baris++){
		for (kolom = 0; kolom <= baris; kolom++){
			printf("* ");
		} printf("\n");
		
	}
	
	for(baris = tinggi - 1; baris >= 1; baris--){
		for (kolom = 1; kolom <= baris; kolom++){
			printf("* ");
		} printf("\n");
	} 
}
