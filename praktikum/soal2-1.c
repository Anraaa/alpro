#include <stdio.h>
#include <math.h>

void keliling(int sisi1, int sisi2, int sisi3, double *keliling){
	*keliling = sisi1 + sisi2 + sisi3;
}

void setengahKeliling(int sisi1, int sisi2, int sisi3, double *setengah_keliling) {
    double kelilingValue;
    keliling(sisi1, sisi2, sisi3, &kelilingValue);  
    *setengah_keliling = kelilingValue / 2.0;
}


int main(){
	int sisi1, sisi2, sisi3, subMenu;
	
Awal:	
	// Identitas Mahasiswa
    system("cls");
    printf("Tugas Praktikum ALPRO 2 [Hitung Luas Segitiga] \n");
    printf("\n");
    printf("================================================\n");
    printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    printf("Nim		: 20230801388 \n");
    printf("================================================\n");
    printf("\n");
    printf("Selamat Datang, ");
    system("pause");
    
Menu:
	system("cls");
	printf("Masukkan Sisi A: ");
	scanf("%d", &sisi1);
	printf("Masukkan Sisi B: ");
	scanf("%d", &sisi2);
	printf("Masukkan Sisi C: ");
	scanf("%d", &sisi3);
	
	// Menghitung keliling segitiga
	double kelilingValue;
	keliling(sisi1, sisi2, sisi3, &kelilingValue);
	printf("\n");
	printf("Keliling Segitiga: %.2lf\n", kelilingValue);	

	// Menghitung Setengah keliling
	double setengah_kelilingValue;
    setengahKeliling(sisi1, sisi2, sisi3, &setengah_kelilingValue);
    printf("Setengah keliling segitiga: %.2lf\n", setengah_kelilingValue);
	
	
	// Menghitung luas segitga
	double luas;
	luas = (1.0 / 4.0) * sqrt(4.0 * sisi1 * sisi1 - sisi2 * sisi2);
	printf("Hasil luas segitiga: %lf\n", luas);
	
	// mengecek Jenis Segitiga
	if (sisi1 == sisi2 && sisi2 == sisi3 ){
		printf("\n");
		printf("Segitiga Sama Sisi\n");
		printf("\n");
    	
    	// Menghitung tinggi segitiga sama sisi
    	float tinggi;
    	tinggi = sisi1 * sqrt(3) / 2;
    	
    	// Menampilkan hasil
    	printf("Tinggi segitiga sama sisi: %.2f", tinggi);
	}
	else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3){
		printf("Segitiga Sama Kaki\n");
	}
	else {
		printf("Segitiga Sembarang\n");
	}
    
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
