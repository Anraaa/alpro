#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Antrian {
    int noAntrian;
    char nama[50];
    char eksekutor[50];
    struct Antrian* next;
};

struct Antrian* head = NULL;
struct Antrian* tail = NULL;
int noAntrianTerakhir = 0;

int pendapatanMitra = 0;
int pendapatanEksekutor[3] = {0}; // Array for Ganyu, Hu Tao, Xianling

// Function to add antrian
void tambahAntrian() {
    struct Antrian* newNode = (struct Antrian*)malloc(sizeof(struct Antrian));
    if (!newNode) {
        printf("Memory allocation failed.\n");
        return;
    }

    if (head == NULL) {
        noAntrianTerakhir = 0;  // Reset to 0 when the first antrian is added
    }

    noAntrianTerakhir++;
    newNode->noAntrian = noAntrianTerakhir;

    printf("Masukkan nama: ");
    scanf("%s", newNode->nama);

    newNode->next = NULL;

    if (head == NULL) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }

    printf("Antrian berhasil ditambahkan.\n");
}


// Function to display antrian data
void tampilkanAntrian() {
    struct Antrian* current = head;

    if (current == NULL) {
        printf("Antrian kosong.\n");
        return;
    }

    printf("------- Data Antrian -------\n");
    while (current != NULL) {
        printf("No. Antrian  : %d\n", current->noAntrian);
        printf("Nama      : %s\n", current->nama);
        // Calculate remaining queue
        int sisaAntrian = (current->noAntrian - 1);
        printf("Sisa Antrian : %d\n", sisaAntrian);

        printf("----------------------------\n");

        current = current->next;
    }
}

// Function to display daftar tunggu
// Function to display daftar tunggu
void daftarTunggu() {
    struct Antrian* current = head;

    if (current == NULL) {
        printf("Antrian kosong.\n");
        return;
    }

    printf("------- Data Antrian -------\n");
    while (current != NULL) {
        printf("No. Antrian  : %d\n", current->noAntrian);
        printf("Nama      : %s\n", current->nama);

        // Calculate remaining queue
        int sisaAntrian = (current->noAntrian - 1);
        printf("Sisa Antrian : %d\n", sisaAntrian);

        printf("----------------------------\n");

        current = current->next;
    }
}

// Function to delete antrian
void hapusAntrian() {
    if (head == NULL) {
        printf("Antrian kosong. Tidak dapat menghapus antrian.\n");
        return;
    }

    // Displaying the antrian list
    tampilkanAntrian();

    int noAntrian;
    printf("Pilih No. Antrian yang akan dihapus: ");
    scanf("%d", &noAntrian);

    struct Antrian* current = head;
    struct Antrian* prev = NULL;

    while (current != NULL && current->noAntrian != noAntrian) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("No. Antrian tidak ditemukan.\n");
        return;
    }

    // Displaying the available eksekutors
    printf("Eksekutor :\n");
    printf("1. Makima\n");
    printf("2. Herta\n");
    printf("3. Kim Jong Unch\n");

    printf("Pilihan: ");
    int pilihan;
    scanf("%d", &pilihan);

    switch (pilihan) {
        case 1:
            strcpy(current->eksekutor, "Makima");
            break;
        case 2:
            strcpy(current->eksekutor, "Herta");
            break;
        case 3:
            strcpy(current->eksekutor, "Kim Jong Unch");
            break;
        default:
            printf("Pilihan tidak valid.\n");
            return;
    }

    // Counting pendapatan
    int indexEksekutor = pilihan - 1; // Adjusting index for array
    pendapatanEksekutor[indexEksekutor] += 12000;
    pendapatanMitra += 8000;

    // Deleting the antrian
    if (prev == NULL) {
        // If the deleted antrian is the head
        head = current->next;
    } else {
        prev->next = current->next;
    }

    printf("\n-------------------------------\n");
    printf("No. Antrian : %d\n", current->noAntrian);
    printf("Nama        : %s\n", current->nama);
    printf("Eksekutor   : %s\n", current->eksekutor);
    printf("Sisa Antrian : %d\n", current->noAntrian - noAntrianTerakhir);
    printf("-------------------------------\n");
    printf("Antrian berhasil dihapus.\n");
    printf("-------------------------------\n");
    printf("Pendapatan Mitra    : Rp. %d,-\n", pendapatanMitra);
    printf("Pendapatan Eksekutor: Rp. %d,-\n", pendapatanEksekutor[indexEksekutor]);
    printf("-------------------------------\n");

    // Freeing memory
    free(current);
}

// Function to display pendapatan
void tampilkanPendapatan() {
    printf("-------- Pendapatan --------\n");
    printf("Pendapatan Mitra        : Rp. %d,-\n", pendapatanMitra);
    printf("- Ganyu                 : Rp. %d,-\n", pendapatanEksekutor[0]);
    printf("- Hu Tao                : Rp. %d,-\n", pendapatanEksekutor[1]);
    printf("- Xianling              : Rp. %d,-\n", pendapatanEksekutor[2]);
    printf("----------------------------\n");
}

int main() {
    int choice;
	
	system("cls");
    do {
        printf("\n-------------------------------\n");
        printf("        Barber Pop\n");
        printf("Jl. Perhatian Blok I No. 3U\n");
        printf("-------------------------------\n");
        printf("    --------MENU-------\n");
        printf("     1. Daftar Antrian\n");
        printf("     2. Hapus\n");
        printf("     3. Daftar Tunggu\n");
        printf("     4. Pendapatan\n");
        printf("     5. Keluar\n");
        printf("-------------------------------\n");
        printf("Masukan Pilihan: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
            	system("cls");
                tambahAntrian();
                break;
            case 2:
            	system("cls");
                hapusAntrian();
                break;
            case 3:
            	system("cls");
                daftarTunggu();
                break;
            case 4:
            	system("cls");
                tampilkanPendapatan();
                break;
            case 5:
                printf("Program berakhir.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
                break;
        }
    } while (choice != 5);

    return 0;
}

