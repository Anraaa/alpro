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

    float jumlah = 0;
    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        b[8] = scanf("%d", &n1[i]);
        
        // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    	if (b[8] != 1 || n1[i] <= 1 || n1[i] > 30) {
    		printf("\n");
    		printf("Input melibihi batas maksimal 30 angka. Harap Masukkan Angka Di Bawah 30\n");
    		fflush(stdin);
    		printf("\nTekan Enter Untuk Lanjut...");
    		getchar();
    		goto menu;
			}
        jumlah += n1[i];
   	 	}

    float r = (float) jumlah / n;

    for (i = 0; i < n; i++) {
        printf("Angka ke-%d Adalah: %d\n", i+1, n1[i]);
    }

    printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", n, r);
    fflush(stdin);
}

