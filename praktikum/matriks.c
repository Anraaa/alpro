#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef int matriks[100][100];

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

void tambahMatriks(matriks m1, matriks m2, matriks hasil, int baris, int kolom) {
	int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            hasil[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void kurangMatriks(matriks m1, matriks m2, matriks hasil, int baris, int kolom) {
	int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            hasil[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void kaliMatriks(matriks m1, matriks m2, matriks hasil, int baris1, int kolom1, int baris2, int kolom2) {
    if (kolom1 != baris2) {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        return;
    }
    
	int i, j, k;
    for (i = 0; i < baris1; i++) {
        for (j = 0; j < kolom2; j++) {
            hasil[i][j] = 0;
            for (k = 0; k < kolom1; k++) {
                hasil[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}


void transposeMatriks1(matriks m1, matriks hasil, int baris, int kolom) {
	int i, j;
    for (i = 0; i < kolom; i++) {
        for (j = 0; j < baris; j++) {
            hasil[i][j] = m1[j][i];
        }
    }
}

void transposeMatriks2(matriks m2, matriks hasil, int baris, int kolom) {
	int i, j;
    for (i = 0; i < kolom; i++) {
        for (j = 0; j < baris; j++) {
            hasil[i][j] = m2[j][i];
        }
    }
}

int main() {
    int a, b, c, d;
    int i, j;
    matriks angka, hasilTambah, hasilKurang, hasilKali, hasilTranspose, angka1;

    printf("----- Program Matriks -----\n");
    printf("Masukkan Kolom Untuk Matriks 1: ");
    scanf("%d", &b);
    printf("Masukkan Baris Untuk Matriks 1: ");
    scanf("%d", &a);
    printf("\n");
    printf("Masukkan Kolom Untuk Matriks 2: ");
    scanf("%d", &d);
    printf("Masukkan Baris Untuk Matriks 2: ");
    scanf("%d", &c);

    printf("Masukkan Elemen Matriks ke 1:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &angka[i][j]);
        }
    }
    
    printf("\n");
    
    printf("Masukkan Elemen Matriks ke 2:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &angka1[i][j]);
        }
    }

    printf("\nMatriks Pertama:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("[ %-2d] ", angka[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriks Kedua:\n");
    for (i = 0; i < c; i++) {
        for (j = 0; j < d; j++) {
            printf("[ %-2d] ", angka1[i][j]);
        }
        printf("\n");
    }

    tambahMatriks(angka, angka1, hasilTambah, a, b);
    kurangMatriks(angka, angka1, hasilKurang, a, b);
    kaliMatriks(angka, angka1, hasilKali, a, b, c, d);
    transposeMatriks1(angka, hasilTranspose, a, b);
    transposeMatriks2(angka1, hasilTranspose, a, b);

    printf("\nMatriks Penjumlahan:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("[ %-4d] ", hasilTambah[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriks Pengurangan:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("[ %-4d] ", hasilKurang[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriks Perkalian:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < d; j++) {
            printf("| %-6d| ", hasilKali[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriks Transpose 1:\n");
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            printf("[ %-2d] ", hasilTranspose[i][j]);
        }
        printf("\n");
    }
    
    printf("\nMatriks Transpose 2:\n");
    for (i = 0; i < d; i++) {
        for (j = 0; j < c; j++) {
            printf("[ %-2d] ", hasilTranspose[i][j]);
        }
        printf("\n");
    }

    system("pause");
    return 0;
}

