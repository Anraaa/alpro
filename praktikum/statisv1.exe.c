#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#ifdef _WIN32
    #define CLEAR_SCREEN "cls"
#else
    #define CLEAR_SCREEN "clear"
#endif

#define MAX_LOKET 5
#define MAX_NAMA 100

struct Antrian {
    int noAntrian;
    char nama[MAX_NAMA];
};

struct Antrian antrian[MAX_LOKET];
int rear = -1;

bool isFull() {
    return (rear == MAX_LOKET - 1);
}

bool isEmpty() {
    return (rear == -1);
}

void tambahAntrian() {
    printf("\n");
    
    if (isFull()) {
        printf("Antrian penuh. Tidak dapat menambahkan antrian.\n");
    } else {
        rear++;
        
        if (isEmpty()) {
            // Jika antrian kosong, nomor antrian dimulai dari 1
            antrian[rear].noAntrian = 1;
        } else {
            // Jika masih ada antrian lain, nomor antrian meneruskan dari antrian sebelumnya
            antrian[rear].noAntrian = antrian[rear - 1].noAntrian + 1;
        }

        printf("No. Antrian Anda: %d\n", antrian[rear].noAntrian);
        printf("Masukkan nama anda: ");
        getchar();  // Menangani karakter newline yang tertinggal
        fgets(antrian[rear].nama, sizeof(antrian[rear].nama), stdin);
        antrian[rear].nama[strcspn(antrian[rear].nama, "\n")] = '\0';  // Menghapus karakter newline

        printf("Nama Anda: %s\n", antrian[rear].nama);
    }
    
    system("pause");
}

void hapusAntrian() {
	printf("\n");
    if (isEmpty()) {
        printf("Antrian kosong. Tidak dapat menghapus antrian.\n");
    } else {
        printf("Antrian untuk %s di Loket %d dihapus.\n", antrian[0].nama, antrian[0].noAntrian);

        // Memindahkan antrian lain jika ada
        for (int i = 0; i < rear; i++) {
            antrian[i] = antrian[i + 1];
        }

        rear--;

        if (isEmpty()) {
            printf("Semua antrian dihapus.\n");
        }
    }
    
    system("pause");
}

void cetakAntrian() {
    printf("\n");
	printf("------- Data Antrian -------\n");

    for (int i = 0; i <= rear; i++) {
        printf("No. Antrian      : %d\n", antrian[i].noAntrian);
        printf("Nama            : %s\n\n", antrian[i].nama);
    }

    printf("----------------------------\n");
    
    system("pause");
}

int main() {
    int choice;

    do {
        printf("=====Menu======\n");
        printf("1. Tambah Antrian\n");
        printf("2. Hapus Antrian\n");
        printf("3. Cetak Antrian\n");
        printf("4. Keluar\n");

        printf("Pilihan: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                tambahAntrian();
                break;

            case 2:
                hapusAntrian();
                break;

            case 3:
                cetakAntrian();
                break;

            case 4:
                printf("Program berakhir.\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }

        // Membersihkan layar sebelum menampilkan menu baru
        system(CLEAR_SCREEN);
    } while (choice != 4);

    return 0;
}

