#include <stdio.h>

void subMenu1(){
	printf("Kembali ke Menu Utama? (Y/N): ");
}

int main() {
    int n, i, bilangan;
    int jumlah = 0;
    int jumlah_genap = 0;
    float rata_rata;
    
    mainMenu:
	system("cls");
	printf("\n\n=========== SELAMAT DATANG ===========\n\n");
    printf("1. Menghitung Rata Rata Bilangan Genap\n");
    printf("2. Menghitung Bintang Angka\n");
    printf("3. Menghitung Kardus Keluar\n");
    printf("4. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");
	
	int b[10], sm[10];
	
    // Membaca input pengguna dan memvalidasi
	b[1] = scanf("%d", &sm[1]);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || sm[1] < 1 || sm[1] > 4) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 4.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }

    switch (sm[1]) {
    	case 1: 
    		menu1:
    		system("cls");
   			printf("Masukkan n: ");
    		fflush(stdin);
    		scanf("%d", &n);

    		for (i = 1; i <= n; i++) {
        	printf("Masukkan bilangan ke-%d: ", i);
        	scanf("%d", &bilangan);

        	// Memeriksa apakah bilangan genap
        	if (bilangan % 2 == 0) {
            	jumlah_genap++;
            	jumlah += bilangan;
        		}
    		}

				rata_rata = 0;
			
    		// Menghitung rata-rata
     		if (jumlah_genap > 0) {
        		rata_rata = (float) jumlah / jumlah_genap;
        		printf("Rata-rata bilangan genap: %.2f\n", rata_rata);
    		} else {
        		printf("Tidak ada bilangan genap yang dimasukkan.\n");
    		}
    		
    		
    			
    		printf("\n");
    		subMenu1_A:
    		fflush(stdin);
    		subMenu1();
				
			char sm1[10];
    		// Membaca input pengguna dan memvalidasi
			b[2] = scanf("%c", &sm1[2]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[2] != 1 || getchar() != '\n' || sm1[2] != 'y' && sm1[2] != 'n') {
    		printf("\n");
        	printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        	fflush(stdin);
        	printf("\nTekan Enter Untuk Lanjut...");
        	getchar();
        	goto subMenu1_A;
    		} 

    		switch (sm1[2]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            		break;
    		}
			break; 
    	case 2:
    		system("cls");
    		int n, i, j;
    		int totalKeseluruhan = 0;

    		printf("Masukkan nilai n: ");
    		scanf("%d", &n);

   			for (i = 1; i <= n; i++) {
       			int totalBaris = 0;

        		for (j = 1; j <= i; j++) {
            		printf("%d", j);
            		totalBaris += j;
            		totalKeseluruhan += j;

            	if (j < i) {
                	printf(" + ");
            		}
        		}

        	printf(" = %d\n", totalBaris);
    		}

    		printf("\nJadi, jumlah seluruhnya adalah %d\n", totalKeseluruhan);
    		
    		printf("\n");
    		subMenu2_A:
    		fflush(stdin);
    		subMenu1();
				
    		// Membaca input pengguna dan memvalidasi
			b[3] = scanf("%c", &sm1[3]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[3] != 1 || getchar() != '\n' || sm1[3] != 'y' && sm1[3] != 'n') {
    		printf("\n");
        	printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        	fflush(stdin);
        	printf("\nTekan Enter Untuk Lanjut...");
        	getchar();
        	goto subMenu2_A;
    		} 

    		switch (sm1[3]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            		break;
    		}
			break;
		case 3:
			system("cls");
			int jumlahBakwan, jumlahGehu, jumlahPisgor;
    		int maksimumBakwan = 20, maksimumGehu = 15, maksimumPisgor = 25;
    		
    		printf("Maksimal 1 Kardus Bakwan Adalah 20 Bakwan\n");
    		printf("Maksimal 1 Kardus Bakwan Adalah 15 Bakwan\n");
    		printf("Maksimal 1 Kardus Bakwan Adalah 25 Bakwan\n");
    		printf("\n");

    		// Input jumlah setiap item
    		printf("Masukkan jumlah bakwan: ");
    		scanf("%d", &jumlahBakwan);

    		printf("Masukkan jumlah gehu: ");
    		scanf("%d", &jumlahGehu);

    		printf("Masukkan jumlah pisgor: ");
    		scanf("%d", &jumlahPisgor);

    		// Menghitung jumlah kardus yang dibutuhkan
    		int kardusBakwan = (jumlahBakwan + maksimumBakwan - 1) / maksimumBakwan;
    		int kardusGehu = (jumlahGehu + maksimumGehu - 1) / maksimumGehu;
    		int kardusPisgor = (jumlahPisgor + maksimumPisgor - 1) / maksimumPisgor;

    		// Menghitung total kardus
    		int totalKardus = kardusBakwan + kardusGehu + kardusPisgor;

    		// Menampilkan hasil
    		printf("\nTotal kardus yang dibutuhkan:\n");
    		printf("Bakwan   : %d kardus (%d bakwan)\n", kardusBakwan, jumlahBakwan);
    		printf("Gehu     : %d kardus (%d gehu)\n", kardusGehu, jumlahGehu);
    		printf("Pisgor   : %d kardus (%d pisgor)\n", kardusPisgor, jumlahPisgor);
    		printf("-------------------\n");
    		printf("Total    : %d kardus\n", totalKardus);
    		
    		printf("\n");
    		subMenu3_A:
    		fflush(stdin);
    		subMenu1();
				
    		// Membaca input pengguna dan memvalidasi
			b[4] = scanf("%c", &sm1[4]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[4] != 1 || getchar() != '\n' || sm1[4] != 'y' && sm1[4] != 'n') {
    		printf("\n");
        	printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        	fflush(stdin);
        	printf("\nTekan Enter Untuk Lanjut...");
        	getchar();
        	goto subMenu3_A;
    		} 

    		switch (sm1[4]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            		break;
    		}
    		break;
	}
    return;
}
