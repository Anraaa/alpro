#include "stdio.h"
#include "stdlib.h"
#include "lib.matriks.h"
#include "prc.matriks.c"

int main() {
	int matriks1[100][100], matriks2[100][100], hasilTranspose1[100][100], hasilTranspose2[100][100];
    int i, j;
    int angka1[100][100];
    int angka2[100][100];
    int hasil[100][100];
    int a1, b1, a2, b2;
    int menu;
    int b[100];
	
	mainMenu:
	system("cls");
    printf("Menu:\n");
    printf("1. Penjumlahan Matriks\n");
    printf("2. Pengurangan Matriks\n");
    printf("3. Perkalian Matriks\n");
    printf("4. Transpose Matriks\n");
    printf("5. Keluar\n");

    printf("Pilih menu (1-5): ");
    // Membaca input pengguna dan memvalidasi
	b[1] = scanf("%d", &menu);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || menu < 1 || menu > 5) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 5.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }

    switch (menu) {
        case 1:
        	menu1:
            system("cls");
            inputMatriks(angka1, &a1, &b1);
            
            displayMatriks(angka1, a1, b1);

            printf("\n");

            inputMatriks2(angka2, &a2, &b2);
            
            displayMatriks(angka2, a2, b2);

            // Periksa apakah dimensi matriks sesuai untuk penjumlahan
            if (pengecekanDimensi(a1, b1, a2, b2)) {
                tambahMatriks(angka1, angka2, hasil, a1, b1);

                printf("\nMatriks Penjumlahan:\n");
                for (i = 0; i < a1; i++) {
                    for (j = 0; j < b1; j++) {
                        printf("[ %-4d] ", hasil[i][j]);
                    }
                    printf("\n");
                }
            } else {
                printf("Error: Dimensi matriks tidak sesuai untuk penjumlahan.\n");
            }
            break;
        case 2:
        	system("cls");
        	inputMatriks(angka1, &a1, &b1);
            displayMatriks(angka1, a1, b1);

            printf("\n");

            inputMatriks2(angka2, &a2, &b2);
            displayMatriks(angka2, a2, b2);
    		
    		if (pengecekanDimensi(a1, b1, a2, b2)) {
            	kurangMatriks(angka1, angka2, hasil, a1, b1);
            
				printf("\nMatriks Pengurangan:\n");
    			for (i = 0; i < a1; i++) {
        			for (j = 0; j < b1; j++) {
            			printf("[ %-4d] ", hasil[i][j]);
        			}
        			printf("\n");
    			}
    		} else {
    			printf("Error: Dimensi matriks tidak sesuai untuk pengurangan.\n");
			}
            break;
        case 3:
        	system("cls");
            inputMatriks(angka1, &a1, &b1);
            displayMatriks(angka1, a1, b1);

            printf("\n");

            inputMatriks2(angka2, &a2, &b2);
            displayMatriks(angka2, a2, b2);
			
			if (pengecekanDimensiP(a1, b1, a2, b2)) {
				kaliMatriks(angka1, angka2, hasil, a1, b1, a2, b2);
            
				printf("\nMatriks Perkalian:\n");
    			for (i = 0; i < a1; i++) {
        			for (j = 0; j < b2; j++) {
            			printf("[ %-6d] ", hasil[i][j]);
        			}
        			printf("\n");
    			}
			} else {
				printf("Error: Dimensi matriks tidak sesuai untuk perkalian.\n");
    		}
            break;
        case 4:
        	system("cls");
            inputMatriks(angka1, &a1, &b1);
            displayMatriks(angka1, a1, b1);

            printf("\n");

            inputMatriks2(angka2, &a2, &b2);
            displayMatriks(angka2, a2, b2);
			
			// Transpose Matriks Pertama
    		transposeMatriks1(angka1, hasilTranspose1, a1, b1);
    		printf("\nMatriks Transpose Pertama:\n");
    		displayMatriks(hasilTranspose1, b1, a1);

    		// Transpose Matriks Kedua
    		transposeMatriks2(angka2, hasilTranspose2, a2, b2);
    		printf("\nMatriks Transpose Kedua:\n");
    		   displayMatriks(hasilTranspose2, b2, a2);
            break;
        case 5:
            printf("Keluar dari program.\n");
            break;
        default:
            printf("Pilihan tidak valid.\n");
    }

    return 0;
}

