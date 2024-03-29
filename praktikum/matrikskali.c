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
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = m1[i][j] + m2[i][j];
        }
    }
}

void kurangMatriks(matriks m1, matriks m2, matriks hasil, int baris, int kolom) {
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            hasil[i][j] = m1[i][j] - m2[i][j];
        }
    }
}

void kaliMatriks(matriks m1, matriks m2, matriks hasil, int baris1, int kolom1, int baris2, int kolom2) {
    if (kolom1 != baris2) {
        printf("Error: Incompatible matrix dimensions for multiplication.\n");
        return;
    }

    for (int i = 0; i < baris1; i++) {
        for (int j = 0; j < kolom2; j++) {
            hasil[i][j] = 0;
            for (int k = 0; k < kolom1; k++) {
                hasil[i][j] += m1[i][k] * m2[k][j];
            }
        }
    }
}

void transposeMatriks(matriks m, matriks hasil, int baris, int kolom) {
    for (int i = 0; i < kolom; i++) {
        for (int j = 0; j < baris; j++) {
            hasil[i][j] = m[j][i];
        }
    }
}

int main() {
    int a, b, c, d; // Dimensions for matrices
    int i, j;
    matriks matriks1, matriks2, hasilTambah, hasilKurang, hasilKali, hasilTranspose;

    printf("----- Program Matriks -----\n");

    // Input for Matrix 1
    printf("Masukkan Baris dan Kolom untuk Matriks 1: ");
    scanf("%d %d", &a, &b);

    printf("Masukkan Elemen Matriks 1:\n");
    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            printf("Masukkan elemen baris %d kolom %d: ", i + 1, j + 1);
            scanf("%d", &matri

