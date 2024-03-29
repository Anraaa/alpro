// lib.feodal.h
#ifndef LIB_FEODAL_H
#define LIB_FEODAL_H
#define MAX_MENU 100


struct Menu {
    char nama[100];
    float harga;
};

// Function declarations
int menuContainsKeyword(const char menuNama[], const char kataKunci[]);
void tambahMenu(struct Menu daftarMenu[], int *jumlahMenu);
void sortMenu(struct Menu daftarMenu[], int jumlahMenu, int ascending);
void selectionSortMenu(struct Menu daftarMenu[], int jumlahMenu);
void toLowerCase(char *str);
int binarySearch(struct Menu daftarMenu[], int low, int high, const char kataKunci[]);
int cariMenu(struct Menu daftarMenu[], int jumlahMenu, const char kataKunci[]);
void tampilkanMenu(struct Menu daftarMenu[], int jumlahMenu);

#endif // LIB_FEODAL_H

