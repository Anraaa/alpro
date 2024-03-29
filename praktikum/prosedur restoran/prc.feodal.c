// prc_feodal.c
#include "lib.feodal.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


char *strcasestr(const char *haystack, const char *needle);


void tambahMenu(struct Menu daftarMenu[], int *jumlahMenu) {
    if (*jumlahMenu < MAX_MENU) {
        printf("Masukkan nama menu: ");
        getchar();
        fgets(daftarMenu[*jumlahMenu].nama, sizeof(daftarMenu[*jumlahMenu].nama), stdin);


        daftarMenu[*jumlahMenu].nama[strcspn(daftarMenu[*jumlahMenu].nama, "\n")] = '\0';

        printf("Masukkan harga menu: ");
        scanf("%f", &daftarMenu[*jumlahMenu].harga);

        (*jumlahMenu)++;
        printf("Menu berhasil ditambahkan!\n");
    } else {
        printf("Daftar menu sudah penuh!\n");
    }
}

void sortMenu(struct Menu daftarMenu[], int jumlahMenu, int ascending) {
    for (int i = 0; i < jumlahMenu - 1; i++) {
        for (int j = 0; j < jumlahMenu - i - 1; j++) {
            int compareResult = (ascending) ? strcmp(daftarMenu[j].nama, daftarMenu[j + 1].nama) :
                                              daftarMenu[j].harga > daftarMenu[j + 1].harga;

            if (compareResult > 0) {
                struct Menu temp = daftarMenu[j];
                daftarMenu[j] = daftarMenu[j + 1];
                daftarMenu[j + 1] = temp;
            }
        }
    }

    printf((ascending) ? "Menu berhasil diurutkan berdasarkan nama!\n" : "Menu berhasil diurutkan berdasarkan harga!\n");
}

void selectionSortMenu(struct Menu daftarMenu[], int jumlahMenu) {
    for (int i = 0; i < jumlahMenu - 1; i++) {
        int minIndex = i;

        // Temukan indeks menu dengan harga terkecil
        for (int j = i + 1; j < jumlahMenu; j++) {
            if (daftarMenu[j].harga < daftarMenu[minIndex].harga) {
                minIndex = j;
            }
        }

        // Tukar elemen pada indeks i dengan elemen pada indeks minIndex
        struct Menu temp = daftarMenu[i];
        daftarMenu[i] = daftarMenu[minIndex];
        daftarMenu[minIndex] = temp;
    }
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int menuContainsKeyword(const char menuNama[], const char kataKunci[]) {
	// Membuat salinan string
    char *lowercaseMenuNama = strdup(menuNama);
    char *lowercaseKataKunci = strdup(kataKunci);
	
	// Mengonversi ke huruf kecil
    toLowerCase(lowercaseMenuNama);
    toLowerCase(lowercaseKataKunci);
	
	
    char *token = strtok(lowercaseKataKunci, " ");

    // Mengecek apakah semua kata kunci ada dalam menuNama
    while (token != NULL) {
        if (strstr(lowercaseMenuNama, token) == NULL) {
            free(lowercaseMenuNama);
            free(lowercaseKataKunci);
            return 0; // Salah satu kata kunci tidak ditemukan dalam menuNama
        }
        token = strtok(NULL, " ");
    }

    free(lowercaseMenuNama);
    free(lowercaseKataKunci);
    return 1; 
}


int cariMenu(struct Menu daftarMenu[], int jumlahMenu, const char kataKunci[]) {
    int found = 0;
    int submenu;

    printf("\nHasil Pencarian:\n");
    printf("%-5s%-30s%-10s\n", "No.", "Nama Menu", "Harga");
    printf("==============================\n");

    // Gunakan binary search untuk menemukan indeks awal
    int result = binarySearch(daftarMenu, 0, jumlahMenu - 1, kataKunci);

    if (result != -1) {
        // Iterasi mundur dari indeks awal dan periksa setiap menu dengan kata kunci yang sesuai
        for (int i = result; i >= 0 && menuContainsKeyword(daftarMenu[i].nama, kataKunci); i--) {
            printf("%-5d%-30s%-10.2f\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
            found = 1;
        }

        // Iterasi maju dari indeks awal dan periksa setiap menu dengan kata kunci yang sesuai
        for (int i = result + 1; i < jumlahMenu && menuContainsKeyword(daftarMenu[i].nama, kataKunci); i++) {
            printf("%-5d%-30s%-10.2f\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
            found = 1;
        }
    }

    if (!found) {
        printf("Menu tidak ditemukan.\n");
    }

    printf("==============================\n");

    if (found) {
        printf("1. Cari lagi?\n");
        printf("2. Keluar\n");
        printf("Masukkan pilihan: ");
        scanf("%d", &submenu);

        if (submenu == 2) {
            return 1; // Keluar dari loop utama jika memilih keluar program
        }
    }

    return 0; // Kembali ke menu utama
}


int binarySearch(struct Menu daftarMenu[], int low, int high, const char kataKunci[]) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Bandingkan menggunakan fungsi menuContainsKeyword
        if (menuContainsKeyword(daftarMenu[mid].nama, kataKunci) == 0) {
            return mid;
        }

        // Jika menuContainsKeyword mengembalikan nilai 1, artinya kata kunci lebih kecil dari menu tengah
        if (menuContainsKeyword(daftarMenu[mid].nama, kataKunci) == 1) {
            high = mid - 1;
        }
        // Jika menuContainsKeyword mengembalikan nilai -1, artinya kata kunci lebih besar dari menu tengah
        else {
            low = mid + 1;
        }
    }

    // Jika kita mencapai sini, maka kata kunci tidak ditemukan
    return -1;
} 

void tampilkanMenu(struct Menu daftarMenu[], int jumlahMenu) {
    printf("Feodal Wu Restaurant\n");
    printf("==================================================\n");
    printf("\n");
    printf("%-10s%-20s%-5s\n", "No.", "Nama Menu", "Harga");
    printf("==================================================\n");

    if (jumlahMenu == 0) {
    } else {
        for (int i = 0; i < jumlahMenu; i++) {
            printf("%-5d%-30s Rp. %-10.2f\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
        }
    }
    printf("==================================================\n");
}

