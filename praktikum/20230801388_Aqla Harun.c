#include <stdio.h>

void subMenu1(){
	printf("\n");
	printf("Kembali ke Menu Utama? (Y/N/C): ");
}

int main(){
	int b[10];
	int sm[10];
	char sm1[10];
	
mainMenu:
	system("cls");
	printf("\n\n====================\n");
    printf("1. Program Inputan Data Pegawai\n");
    printf("2. Program Inputan Hitung Parkir\n");
    printf("3. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: "); 
    
    // Membaca input pengguna dan memvalidasi
	b[1] = scanf("%d", &sm[1]);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || sm[1] < 1 || sm[1] > 3) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 6.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }
    
    switch(sm[1]){
    	case 1:
    		Menu1:
    		system("cls");
    		
    		char nama[100], jbtn[100]; 
			int id, jk, gaji;
			
			printf("Id : ");
    		scanf("%d", &id);
			
    		printf("Nama Pegawai : ");
    		scanf("%s", &nama);
    		
    		printf("Jabatan : ");
    		scanf("%s", &jbtn);
    		
    		printf("Jam Kerja / Hari : ");
    		scanf("%d", &jk);
    		
    		printf("Golongan Gaji : ");
    		scanf("%d", &gaji);
    		
    		printf("\n");
    		printf("Hasil Olah Data \n");
    		
    		printf("Id : %d \n", id);
    		printf("Nama Pegawai : %s \n", nama);
    		printf("Jabatan : %s \n", jbtn);
    		printf("Jam Kerja / Hari : %d \n", jk);
    		printf("Golongan Gaji : %d \n", gaji);
    		
    		subMenu1_A:
    		
    		subMenu1();
    		fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			b[7] = scanf("%c", &sm1[9]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[7] != 1 || getchar() != '\n' || sm1[9] != 'y' && sm1[9] != 'n' && sm1[9] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu1_A;
    		} 

    		switch (sm1[9]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu1;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
    		break;
    	case 2:
    		Menu2:
    		system("cls");
    		
    		int jam_masuk, menit_masuk, jam_keluar, menit_keluar, biaya;
    
   			// Meminta input jam masuk dan menit masuk
    		printf("Masukkan jam masuk (contoh 11 40): ");
    		scanf("%d %d", &jam_masuk, &menit_masuk);

    		// Meminta input jam keluar dan menit keluar
    		printf("Masukkan jam keluar (14 40): ");
    		scanf("%d %d", &jam_keluar, &menit_keluar);


    		// Menghitung total waktu parkir dalam menit
    		int total_waktu = ((jam_keluar - jam_masuk) * 60) + (menit_keluar - menit_masuk);
    
    		// Menghitung biaya parkir berdasarkan aturan tarif
    		if (total_waktu <= 60)
        		biaya = 2000;
    			else if (total_waktu <= 120)
        			biaya = 2000 + 1000;
    			else if (total_waktu <= 180)
        			biaya = 2000 + 1000 + 1000;
    		else {
        		int tambahan_jam = (total_waktu - 180) / 60;
        		biaya = 2000 + 1000 + 1000 + (500 * tambahan_jam);
    		}

    		// Menampilkan biaya parkir
    		printf("Biaya parkir: %d\n", biaya);
    		
    		subMenu2_A:
    		subMenu1();
    		fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			b[5] = scanf("%c", &sm1[8]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[5] != 1 || getchar() != '\n' || sm1[8] != 'y' && sm1[8] != 'n' && sm1[8] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu2_A;
    		} 

    		switch (sm1[8]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu2;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
    		break;
	}
}
