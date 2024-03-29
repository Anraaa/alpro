#ifndef LIB_MATRIKS_H
#define LIB_MATRIKS_H
#include <stdio.h>

typedef int matriks[100][100];

void tambahMatriks(matriks m1, matriks m2, matriks hasil, int baris, int kolom);
void kurangMatriks(matriks m1, matriks m2, matriks hasil, int baris, int kolom);
void kaliMatriks(matriks m1, matriks m2, matriks hasil, int baris1, int kolom1, int baris2, int kolom2);
void transposeMatriks1(int matriks[100][100], int hasil[100][100], int a, int b);
void transposeMatriks2(int matriks[100][100], int hasil[100][100], int a, int b);
void inputMatriks(int angka[100][100], int *a, int *b);
void inputMatriks(int angka[100][100], int *a, int *b);
void displayMatriks(int angka[100][100], int a, int b);
int pengecekanDimensi(int a1, int b1, int a2, int b2);
int pengecekanDimensiP(int a1, int b1, int a2, int b2);

#endif // LIB_MATRIKS_H

