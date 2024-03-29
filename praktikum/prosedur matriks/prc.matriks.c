#include "lib.matriks.h"

int faktorial(int a) {
    if (a == 1 || a == 0) {
        return 1;
    } else {
        return (a * faktorial(a - 1));
    }
}

int pangkat(int a, int b) {
    if (b == 0) {
        return 1; // Fixing the base case for power function
    } else if (b == 1) {
        return a;
    } else {
        return a * pangkat(a, b - 1);
    }
}

void inputMatriks(int angka[100][100], int *a, int *b) {
    int i, j;
    
    int z[10];

	menu_1:
	system("cls");
    // Memasukkan dimensi dan elemen matriks pertama
    printf("Masukkan Baris Untuk Matriks 1: ");
    // Membaca input pengguna dan memvalidasi
	z[1] = scanf("%d", a);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (z[1] != 1 || getchar() != '\n') {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka yang valid.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu_1;
    }
    
    printf("Masukkan Kolom Untuk Matriks 1: ");
    z[2] = scanf("%d", b);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (z[2] != 1 || getchar() != '\n') {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka yang valid.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu_1;
    }
	
	printf("\n");
    printf("Masukkan Elemen Matriks ke 1:\n");
    for (i = 0; i < *a; i++) {
        for (j = 0; j < *b; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &angka[i][j]);
        }
    }

    printf("\n");
}

void inputMatriks2(int angka[100][100], int *a, int *b) {
    int i, j;
    
    int z[10];
	
	menu_2:
    // Memasukkan dimensi dan elemen matriks pertama
    printf("Masukkan Baris Untuk Matriks 2: ");
    z[1] = scanf("%d", a);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (z[1] != 1 || getchar() != '\n') {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka yang valid.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu_2;
    }
    printf("Masukkan Kolom Untuk Matriks 2: ");
    z[2] = scanf("%d", b);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (z[2] != 1 || getchar() != '\n') {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka yang valid.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto menu_2;
    }
	
	printf("\n");
    printf("Masukkan Elemen Matriks ke 2:\n");
    for (i = 0; i < *a; i++) {
        for (j = 0; j < *b; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &angka[i][j]);
        }
    }

    printf("\n");
}

void displayMatriks(int angka[100][100], int a, int b) {
    int i, j;

    printf("\nMatriks:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("[ %-2d] ", angka[i][j]);
        }
        printf("\n");
    }
}

int pengecekanDimensi(int a1, int b1, int a2, int b2) {
    return (a1 == a2 && b1 == b2);
}

int pengecekanDimensiP(int a1, int b1, int a2, int b2) {
    return (b1 == a2 && a1 == b2);
}

void tambahMatriks(int matriks1[100][100], int matriks2[100][100], int hasil[100][100], int a, int b) {
    int i, j;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            hasil[i][j] = matriks1[i][j] + matriks2[i][j];
        }
    }
}

void kurangMatriks(int matriks1[100][100], int matriks2[100][100], int hasil[100][100], int a, int b) {
    int i, j;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            hasil[i][j] = matriks1[i][j] - matriks2[i][j];
        }
    }
}

void kaliMatriks(int matriks1[100][100], int matriks2[100][100], int hasil[100][100], int a1, int b1, int a2, int b2) {
    int i, j, k;

    for (i = 0; i < a1; i++) {
        for (j = 0; j < b2; j++) {
            hasil[i][j] = 0;
            for (k = 0; k < b1; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
        }
    }
}

void transposeMatriks1(int matriks[100][100], int hasil[100][100], int a, int b) {
    // Your implementation for transposeMatriks1
    int i, j;
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            hasil[i][j] = matriks[j][i];
        }
    }
}

void transposeMatriks2(int matriks[100][100], int hasil[100][100], int a, int b) {
    // Your implementation for transposeMatriks2
    int i, j;
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            hasil[i][j] = matriks[j][i];
        }
    }
}
