#include <stdio.h>
#include <stdlib.h>

#define SIZE 4

// Fungsi untuk mencetak matriks Sudoku
void printSudoku(char sudoku[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", sudoku[i][j]);
        }
        printf("\n");
    }
}

// Fungsi untuk memeriksa apakah suatu angka bisa ditempatkan di baris dan kolom tertentu
int isSafe(char sudoku[SIZE][SIZE], int row, int col, char num) {
    // Periksa apakah angka sudah ada di baris atau kolom
    for (int x = 0; x < SIZE; x++) {
        if (sudoku[row][x] == num || sudoku[x][col] == num) {
            return 0; // Tidak aman
        }
    }

    // Periksa apakah angka sudah ada di submatriks 2x2
    int startRow = row - row % 2;
    int startCol = col - col % 2;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if (sudoku[i + startRow][j + startCol] == num) {
                return 0; // Tidak aman
            }
        }
    }

    // Validasi hanya untuk angka 1-4
    return (num >= '1' && num <= '4');
}

// Fungsi untuk mengisi sel kosong pada Sudoku
void fillEmptyCells(char sudoku[SIZE][SIZE]) {
    char num;

    // Iterasi melalui setiap sel pada matriks
    for (int row = 0; row < SIZE; row++) {
        for (int col = 0; col < SIZE; col++) {
            // Jika sel kosong, minta pengguna untuk mengisi
            if (sudoku[row][col] == '*') {
                printf("Isi sel kosong pada baris %d kolom %d (1-%d): ", row + 1, col + 1, SIZE);
                scanf(" %c", &num);  // tambahkan spasi sebelum %c untuk mengatasi karakter newline

                // Tempatkan angka di sel kosong
                sudoku[row][col] = num;
                system("cls");

                // Cetak matriks setelah pengisian
                printf("\nMatriks setelah pengisian:\n");
                printSudoku(sudoku);
            }
        }
    }

    // Memeriksa matriks setelah terisi semua
    int validMatrix = 1;

    // Memeriksa apakah matriks valid setelah terisi semua
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            // Validasi apakah angka bisa ditempatkan di sel tersebut
            if (!isSafe(sudoku, i, j, sudoku[i][j])) {
                validMatrix = 0;
                break;
            }
        }
        if (!validMatrix) {
            break;
        }
    }

    // Menampilkan notifikasi jika matriks valid
    if (validMatrix) {
        printf("\nSudoku telah selesai!\n");
        printSudoku(sudoku);
    } else {
        // Memeriksa kembali matriks setelah terisi semua
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {
                // Memeriksa apakah ada angka yang sama pada submatriks 2x2
                int startRow = i - i % 2;
                int startCol = j - j % 2;
                for (int x = 0; x < 2; x++) {
                    for (int y = 0; y < 2; y++) {
                        if ((i != startRow + x || j != startCol + y) && sudoku[i][j] == sudoku[startRow + x][startCol + y]) {
                            // Jika ada angka yang sama, minta pengguna untuk mengisi ulang salah satu angka
                            printf("Angka %c pada baris %d kolom %d tidak valid! Isi ulang (1-%d): ", sudoku[i][j], i + 1, j + 1, SIZE);
                            scanf(" %c", &num);

                            // Validasi apakah angka bisa ditempatkan di sel tersebut
                            while (!isSafe(sudoku, i, j, num)) {
                                printf("Angka tidak valid! Coba lagi: ");
                                scanf(" %c", &num);
                            }

                            // Tempatkan angka yang benar di sel yang salah
                            sudoku[startRow + x][startCol + y] = num;
                            system("cls");

                            // Cetak matriks setelah pengisian ulang
                            printf("\nMatriks setelah pengisian ulang:\n");
                            printSudoku(sudoku);
                        }
                    }
                }
            }
        }
    }
}

int main() {
    char sudoku[SIZE][SIZE] = {
        {'1', '*', '*', '*'},
        {'*', '3', '*', '*'},
        {'4', '*', '*', '*'},
        {'*', '2', '*', '4'}
    };

    // Cetak matriks awal
    printf("Matriks awal:\n");
    printSudoku(sudoku);

    // Isi sel kosong
    fillEmptyCells(sudoku);

    return 0;
}

