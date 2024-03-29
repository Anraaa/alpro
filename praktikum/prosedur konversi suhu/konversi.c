#include "stdio.h"
#include "stdlib.h"
#include "lib.konversi.h"
#include "prc.konversi.c"

void main()
{
	int sm;
	int b;
	int n;
		
	mainMenu:
	system("cls");
	printf("\n\n====================\n");
    printf("1. Celcius --> fahrenreit\n");
    printf("2. Celcius --> reamur\n");
    printf("3. Celcius --> kelvin\n");
    printf("4. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");
	
    // Membaca input pengguna dan memvalidasi
	b = scanf("%d", &sm);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b != 1 || getchar() != '\n' || sm < 1 || sm > 4) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 4.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }
	
	celcius(sm);
	
	getchar();
	
	return 0;
	
}
