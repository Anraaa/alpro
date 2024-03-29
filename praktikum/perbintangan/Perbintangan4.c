#include <stdio.h>

int main(){
	int tinggi, baris, kolom, k;
	
	printf("Masukkan tinggi segitiga: ");
	scanf("%d", &tinggi);
	
	for(baris = 2; baris <= tinggi; baris++){
		for (kolom = 1; kolom <= tinggi - baris; kolom++){
			printf("_");
			} 
		for (kolom = 1; kolom <= baris; kolom++){
			printf("*"); 
			}
		for (kolom = 1; kolom <= tinggi; kolom++) {
            printf("_"); 
			}
		for (kolom = 0; kolom <= baris; kolom++){
			printf("*");
        
		} printf("\n");
	}
	
	for(baris = 1 ; baris < 2; baris++){
		for (kolom = 1; kolom <= baris + (tinggi - 1); kolom++){
			printf("_");
		}
		for (kolom = 2; kolom <= baris + tinggi; kolom++){
			printf("*");
		} printf("\n");
		for (kolom = 1; kolom <= baris + (tinggi - 0); kolom++){
			printf("_");
		}
		for (kolom = 1; kolom <= baris + (tinggi - 3); kolom++){
			printf("*");
		}
	}
	return;
}
