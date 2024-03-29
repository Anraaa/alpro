#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MENU 100

struct Menu {
    char nama[50];
    float harga;
};

void tambahMenu(struct Menu daftarMenu[], int *jumlahMenu) {
    if (*jumlahMenu < MAX_MENU) {
        printf("Masukkan nama menu: ");
        fflush(stdin); 
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

int cariMenu(struct Menu daftarMenu[], int jumlahMenu, char kataKunci[]) {
    int found = 0;

    printf("\nHasil Pencarian:\n");
    printf("%-5s%-30s%-10s\n", "No.", "Nama Menu", "Harga");
    printf("==============================\n");

    for (int i = 0; i < jumlahMenu; i++) {
        if (strstr(daftarMenu[i].nama, kataKunci) != NULL) {
            printf("%-5d%-30s%-10.2f\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
            found = 1;
        }
    }

    if (!found) {
        printf("Menu tidak ditemukan.\n");
    }

    printf("==============================\n");

    return found;
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

int main() {
    struct Menu daftarMenu[MAX_MENU];
    int jumlahMenu = 0;

    int pilihan;

    do {
        system("cls");
        tampilkanMenu(daftarMenu, jumlahMenu);

        printf("\n1. Add New Menu\n");
        printf("2. Sort Menu by Name (Bubble Sort)\n");
        printf("3. Sort Menu by Price (Selection Sort)\n");
        printf("4. Search Menu (Binary Search)\n");
        printf("5. Exit\n");

        printf("Masukkan pilihan: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                system("cls");
                tambahMenu(daftarMenu, &jumlahMenu);
                break;
            case 2:
                system("cls");
                sortMenu(daftarMenu, jumlahMenu, 1);
                break;
            case 3:
                system("cls");
                sortMenu(daftarMenu, jumlahMenu, 0);
                break;
            case 4:
                system("cls");
                {
                    char kataKunci[50];
                    printf("Masukkan kata kunci untuk pencarian: ");
                    fflush(stdin);
                    fgets(kataKunci, sizeof(kataKunci), stdin);
                    kataKunci[strcspn(kataKunci, "\n")] = '\0';
                    if (cariMenu(daftarMenu, jumlahMenu, kataKunci)) {
                        printf("\n1. Kembali\n");
                        printf("2. Keluar\n");
                        printf("Masukkan pilihan: ");
                        int submenu;
                        scanf("%d", &submenu);
                        if (submenu == 2) {
                            pilihan = 5;
                        }
                    }
                }
                break;
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}


{
    			char kataKunci[50];
    			int submenu; // Tambahkan variabel submenu untuk pilihan setelah pencarian
    			do {
        			printf("Masukkan kata kunci untuk pencarian: ");
        			getchar();  // Membersihkan karakter newline dari buffer
        			fgets(kataKunci, sizeof(kataKunci), stdin);
        			kataKunci[strcspn(kataKunci, "\n")] = '\0';
        			if (cariMenu(daftarMenu, jumlahMenu, kataKunci)) {
            			printf("\n1. Cari lagi\n");
            			printf("2. Kembali ke Menu Utama\n");
            			printf("3. Keluar\n");
            			printf("Masukkan pilihan: ");
            			scanf("%d", &submenu);

            if (submenu == 2) {
                break; // Keluar dari loop pencarian jika memilih kembali ke Menu Utama
            } else if (submenu == 3) {
                pilihan = 5; // Keluar dari loop utama jika memilih keluar program
                break;
            }
        } else {
            printf("\nMenu tidak ditemukan.\n");
            printf("1. Cari lagi\n");
            printf("2. Kembali ke Menu Utama\n");
            printf("3. Keluar\n");
            printf("Masukkan pilihan: ");
            scanf("%d", &submenu);

            if (submenu == 2) {
                break; // Keluar dari loop pencarian jika memilih kembali ke Menu Utama
            } else if (submenu == 3) {
                pilihan = 5; // Keluar dari loop utama jika memilih keluar program
                break;
            }
        }
    } while (submenu != 2 && submenu != 3);
    break;
}
