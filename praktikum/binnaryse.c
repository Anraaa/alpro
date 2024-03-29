#include <stdio.h>

// Fungsi untuk melakukan pencarian biner pada matriks 2D yang diurutkan
void binarySearchMatrix(int matriks[3][3], int baris, int kolom, int target) {
    int rendah = 0, tinggi = baris * kolom - 1;
    int hasilBaris = -1, hasilKolom = -1;

    while (rendah <= tinggi) {
        int tengah = rendah + (tinggi - rendah) / 2;
        int nilaiTengah = matriks[tengah / kolom][tengah % kolom];

        if (nilaiTengah == target) {
            // Elemen ditemukan, simpan letaknya (dalam format baris dan kolom tradisional)
            hasilBaris = tengah / kolom + 1;
            hasilKolom = tengah % kolom + 1;
            break;
        } else if (nilaiTengah < target) {
            // Cari di setengah kanan
            rendah = tengah + 1;
        } else {
            // Cari di setengah kiri
            tinggi = tengah - 1;
        }
    }

    // Menampilkan hasil
    if (hasilBaris != -1 && hasilKolom != -1) {
        printf("Elemen %d ditemukan pada baris %d dan kolom %d dalam matriks.\n", target, hasilBaris, hasilKolom);
    } else {
        printf("Elemen %d tidak ditemukan dalam matriks.\n", target);
    }
}

// Fungsi untuk menampilkan matriks
void displayMatrix(int matriks[3][3], int baris, int kolom) {
    printf("\nMatriks:\n");
    int i, j;
    for (i = 0; i < baris; i++) {
        for (j = 0; j < kolom; j++) {
            printf("[ %-2d] ", matriks[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriks[3][3] = {
        {0, 1, 2},
        {3, 4, 5},
        {6, 7, 8}
    };

    int baris = 3, kolom = 3;  // Matriks 3x3

    // Menampilkan matriks
    displayMatrix(matriks, baris, kolom);
    
    int target;
    
    printf("\n");
    printf("\n");
    
    printf("Cari Angka : ");
    scanf("%d", &target);
    
    // Mencari elemen dan menampilkan letak jika ditemukan
    binarySearchMatrix(matriks, baris, kolom, target);

    return 0;
}
