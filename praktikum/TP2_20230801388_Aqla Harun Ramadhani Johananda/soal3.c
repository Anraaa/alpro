#include <stdio.h>

typedef struct {
    int input1;
    int input2;
    int input3;
} SetNomor;

void masukkanInput(SetNomor *nomor) {
    // Meminta input dari pengguna
    system("cls");
    printf("Masukkan Input Pertama: ");
    scanf("%d", &(nomor->input1));
    printf("Masukkan Input Kedua: ");
    scanf("%d", &(nomor->input2));
    printf("Masukkan Input Ketiga: ");
    scanf("%d", &(nomor->input3));
}

void hitungPengurutan(SetNomor *nomor, int *max, int *mid, int *min) {
    // Menghitung nilai maksimum, tengah, dan minimum
    if (nomor->input1 >= nomor->input2 && nomor->input1 >= nomor->input3) {
        *max = nomor->input1;
        if (nomor->input2 >= nomor->input3) {
            *mid = nomor->input2;
            *min = nomor->input3;
        } else {
            *mid = nomor->input3;
            *min = nomor->input2;
        }
    } else if (nomor->input2 >= nomor->input1 && nomor->input2 >= nomor->input3) {
        *max = nomor->input2;
        if (nomor->input1 >= nomor->input3) {
            *mid = nomor->input1;
            *min = nomor->input3;
        } else {
            *mid = nomor->input3;
            *min = nomor->input1;
        }
    } else {
        *max = nomor->input3;
        if (nomor->input1 >= nomor->input2) {
            *mid = nomor->input1;
            *min = nomor->input2;
        } else {
            *mid = nomor->input2;
            *min = nomor->input1;
        }
    }
}

void tampilSorting(SetNomor nomor, int max, int mid, int min) {
    // Menampilkan hasil sorting
    printf("Hasil Sorting Nomor: Tertinggi = %d, Tengah = %d, Terbawah = %d\n", max, mid, min);
    printf("Hasil Sorting Nomor: Terbawah = %d, Tengah = %d, Tertinggi = %d\n", min, mid, max);
}

int main() {
	int subMenu;  
	
Awal:	
	// Identitas Mahasiswa
    system("cls");
    printf("Tugas Praktikum ALPRO 2 [Sorting Angka] \n");
    printf("\n");
    printf("================================================\n");
    printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    printf("Nim		: 20230801388 \n");
    printf("================================================\n");
    printf("\n");
    printf("Selamat Datang, ");
    system("pause");
    
    SetNomor nomor;
Menu:
    // Meminta input dari pengguna
    masukkanInput(&nomor);

    int max, mid, min;

    // Menghitung pengurutan
    hitungPengurutan(&nomor, &max, &mid, &min);

    // Menampilkan hasil pengurutan
    tampilSorting(nomor, max, mid, min);

subMenu:
    printf("\n\n====================\n");
    printf("1. Kembali Ke Awal\n");
    printf("2. Clear\n");
    printf("3. Keluar Aplikasi\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");

    // Membaca input pengguna dan memvalidasi
	int berhasila = scanf("%d", &subMenu);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (berhasila != 1 || getchar() != '\n' || subMenu < 1 || subMenu > 3) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 3.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto subMenu;
    }

    switch (subMenu) {
        case 1:
            goto Awal;
            break;
        case 2:
            goto Menu;
            break;
        case 3:
            return 0;
            break;
        default:
            printf("Pilihan Menu Tidak Ada\n");
            printf("Silahkan Coba Lagi\n\n");
            goto Menu;
            break;
    }
}







