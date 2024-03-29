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
   	
   	// Find minimum and maximum
    int min = n1[0];
    int max = n1[0];

    for (i = 1; i < n; i++) {
        if (n1[i] < min) {
            min = n1[i];
        }
        if (n1[i] > max) {
            max = n1[i];
        }
    }
    
    printf("\n\n");
    printf("Nilai Maximumnya Adalah: %d\n", max);
    printf("Nilai Minimumnya Adalah: %d\n", min);
   }
