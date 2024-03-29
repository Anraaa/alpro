#include <stdio.h>
#include <stdlib.h>

void main() {
    int n1[100], n, i, s1, b[10];

    menu:
    system("cls");
    printf("Masukkan Banyak Angka: ");
    
    b[1] = scanf("%d", &n);
			
	// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || n < 1) {
    	printf("\n");
    	printf("Input tidak valid harus berupa angka\n");
    	fflush(stdin);
    	printf("\nTekan Enter Untuk Lanjut...");
    	getchar();
    	goto menu;
	}

    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        scanf("%d", &n1[i]);
   	 	}
   	
   	int cari;
   	int jumlah = 0;
   	printf("\n\n");	
   	
   	printf("Array Berisi Angka 5 Ada Di : ");
   	for (i = 0; i < n; i++) {
   		if (n1[i] == 5){
   			jumlah ++;
   			printf("%d", i+1);
   			if (cari > 0){
   				printf(", ");
			}
   			cari ++;
		   }
		}
		printf("\nJumlah Inputan 5 Ada : %d \n", jumlah);
   }
