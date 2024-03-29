#include "stdio.h"
#include "stdlib.h"
#include "lib.feodal.h"
#include "prc.feodal.c"
#include <string.h>

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
                selectionSortMenu(daftarMenu, jumlahMenu);
                break;
            case 4:
                {
    				char kataKunci[50];
    				int submenu;

    				do {
    						system("cls");
        					printf("Masukkan kata kunci untuk pencarian: ");
        					getchar();
        					fgets(kataKunci, sizeof(kataKunci), stdin);
        					kataKunci[strcspn(kataKunci, "\n")] = '\0';

        					int hasilPencarian = cariMenu(daftarMenu, jumlahMenu, kataKunci);

        					if (hasilPencarian) {
        						printf("\n");
        						printf("Beneran Pengen Keluar Aplikasi?\n");
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
            case 5:
                printf("Program selesai.\n");
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    } while (pilihan != 5);

    return 0;
}
