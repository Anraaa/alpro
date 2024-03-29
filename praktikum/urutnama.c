#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char *arr[], int n) {
    int i, j;
    char *temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Tukar elemen jika urutan salah
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Input jumlah data
    printf("Masukkan jumlah kata: ");
    scanf("%d", &n);

    // Validasi jumlah data
    if (n <= 0) {
        printf("Jumlah data harus lebih dari 0.\n");
        return 1;
    }

    // Membuat array untuk menyimpan kata
    char *kata[n];

    // Input kata-kata
    for (int i = 0; i < n; i++) {
        printf("Masukkan kata ke-%d: ", i + 1);
        char buffer[100];
        scanf("%s", buffer);
        kata[i] = strdup(buffer); // Menggunakan strdup untuk mengalokasikan memori dan mengcopy string
    }

    // Mengurutkan kata menggunakan bubble sort
    bubbleSort(kata, n);

    // Menampilkan hasil pengurutan
     printf("\nHasil pengurutan:\n\n");
    char currentInitial = '\0'; // Inisialisasi huruf depan pertama
    for (int i = 0; i < n; i++) {
        if (kata[i][0] != currentInitial) {
            if (currentInitial != '\0') {
                printf("\n------\n");
            }
            currentInitial = kata[i][0];
            printf("%c: %s", currentInitial, kata[i]);
        } else {
            printf(", %s", kata[i]);
        }

        free(kata[i]); // Membebaskan memori yang dialokasikan untuk setiap kata
    }

    printf("\n------\n");

    return 0;
}

