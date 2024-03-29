#include <stdio.h>
#include <math.h>

void inputS(int *sisi1, int *sisi2, int *sisi3){
	system("cls");
	printf("Masukkan Sisi A: ");
	scanf("%d", &sisi1);
	printf("Masukkan Sisi B: ");
	scanf("%d", &sisi2);
	printf("Masukkan Sisi C: ");
	scanf("%d", &sisi3);
}

void keliling(int *keliling, int sisi1, int sisi2, int sisi3) {
    *keliling = sisi1 + sisi2 + sisi3;
    printf("Hasil keliling segitiga: %d\n", *keliling);
}

void setengahS(int keliling, double *setengah_keliling) {
    *setengah_keliling = keliling / 2.0;
}

void luasS(int sisi1, int sisi2, int sisi3, double *luas) {
   double s = (sisi1 + sisi2 + sisi3) / 2.0;

    // Calculate area using Heron's formula
    *luas = sqrt(s * (s - sisi1) * (s - sisi2) * (s - sisi3));
    printf("Hasil luas segitiga: %.2lf\n", *luas);
}


void jenisS(int sisi1, int sisi2, int sisi3) {
    if (sisi1 == sisi2 && sisi2 == sisi3) {
        printf("Segitiga Sama Sisi\n");
        // 
        float tinggi;
        tinggi = sisi1 * sqrt(3) / 2;
        printf("Tinggi segitiga sama sisi: %.2f\n", tinggi);
    } else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3) {
        printf("Segitiga Sama Kaki\n");
    } else {
        printf("Segitiga Sembarang\n");
    }
}


int main(){
	double setengah_keliling;
	int sisi, sisi1, sisi2, sisi3, subMenu;
	
Awal:	
	// Identitas Mahasiswa
    system("cls");
    printf("Tugas Praktikum ALPRO 2 [Segitiga] \n");
    printf("\n");
    printf("================================================\n");
    printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    printf("Nim		: 20230801388 \n");
    printf("================================================\n");
    printf("\n");
    printf("Selamat Datang, ");
    system("pause");
    
Menu:
	inputS(&sisi1, &sisi2, &sisi3);
	
	// Menghitung keliling segitiga
	int keliling_value;
    keliling(&keliling_value, sisi1, sisi2, sisi3);
	
	// Menghitung Setengah Keliling Segitiga
    setengahS(keliling_value, &setengah_keliling);
    
    // Menghitung Luas Segitiga
    luasS(sisi1, sisi2, sisi3, &setengah_keliling);
    
    // Mengecek Jenis Segitiga
    jenisS(sisi1, sisi2, sisi3);
    
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
            goto subMenu;
            break;
    }
}
