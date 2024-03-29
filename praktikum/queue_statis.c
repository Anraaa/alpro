#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LOKET 5
#define MAX_NAMA 100

char antrian[MAX_LOKET][MAX_NAMA];
int front = -1, rear = -1;

bool isFull() {
    return (rear == MAX_LOKET - 1);
}

bool isEmpty() {
    return (front == -1);
}

void enqueue(char *nama) {
    if (isFull()) {
        printf("Antrian penuh. Tidak dapat menambahkan antrian.\n");
    } else {
        if (isEmpty()) {
            front = 0;
        }
        rear++;
        strcpy(antrian[rear], nama);
        printf("Antrian untuk %s ditambahkan di Loket %d.\n", nama, rear + 1);
    }
}

void dequeue(int loket) {
    if (isEmpty() || loket < 1 || loket > MAX_LOKET) {
        printf("Loket tidak valid atau antrian kosong.\n");
    } else {
        printf("Antrian untuk %s di Loket %d dihapus.\n", antrian[loket - 1], loket);
        
        // Memindahkan antrian lain jika ada
        for (int i = loket - 1; i < rear; i++) {
            strcpy(antrian[i], antrian[i + 1]);
        }
        
        rear--;

        if (front > rear) {
            // Jika semua antrian di loket dihapus
            front = -1;
            rear = -1;
        }
    }
}

void displayQueue() {
    system("cls");
    printf("\n");
    for (int i = 0; i < MAX_LOKET; i++) {
        printf("LOKET [%d]  : ", i + 1);
        if (isEmpty() || i > rear) {
            printf("Tidak ada antrian\n");
        } else {
            printf("%s,\n", antrian[i]);
            int banyakAntrian = (isEmpty()) ? 0 : rear - front + 1;
            printf("Banyaknya Antrian Di Loket : %d\n\n", banyakAntrian);
        }
    }

    printf("\n");
    printf("1. Tambah antrian\n");
    printf("2. Hapus antrian\n");
    printf("3. Exit\n");
}

int main() {
    int choice, loket;
    char nama[MAX_NAMA];

    do {
        displayQueue();

        printf("Pilih operasi: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Masukkan nama untuk ditambahkan: ");
                getchar();  // Menangani karakter newline yang tertinggal
                fgets(nama, sizeof(nama), stdin);
                nama[strcspn(nama, "\n")] = '\0';  // Menghapus karakter newline
                enqueue(nama);
                break;

            case 2:
                printf("Masukkan nomor loket untuk menghapus antrian: ");
                scanf("%d", &loket);
                dequeue(loket);
                break;

            case 3:
                printf("Program berakhir.\n");
                break;

            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (choice != 3);

    return 0;
}

