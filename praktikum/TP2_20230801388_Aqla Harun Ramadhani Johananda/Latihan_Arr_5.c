#include <stdio.h>

int b[10], sm[10];
char sm1[10];

void nrda(){
	    int n1[100], n, i, s1, b[10];

    menu:
    system("cls");
    printf("Masukkan Banyak Angka: ");
    
    b[1] = scanf("%d", &n);
			
	// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || n < 1) {
    	printf("\n");
    	printf("Input tidak valid harus berupa angka\n");
    	fflush(stdin);
    	printf("\nTekan Enter Untuk Lanjut...");
    	getchar();
    	goto menu;
	}

    float jumlah = 0;
    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        b[8] = scanf("%d", &n1[i]);
        
        // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    	if (b[8] != 1 || n1[i] <= 1 || n1[i] > 30) {
    		printf("\n");
    		printf("Input melibihi batas maksimal 30 angka. Harap Masukkan Angka Di Bawah 30\n");
    		fflush(stdin);
    		printf("\nTekan Enter Untuk Lanjut...");
    		getchar();
    		goto menu;
			}
        jumlah += n1[i];
   	 	}

    float r = (float) jumlah / n;

    for (i = 0; i < n; i++) {
        printf("Angka ke-%d Adalah: %d\n", i+1, n1[i]);
    }

    printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", n, r);
    fflush(stdin);
}

void ngpd(){
	    int n1[100], n, i, s1, b[10];

    menu:
    system("cls");
    printf("Masukkan Banyak Angka: ");
    
    b[1] = scanf("%d", &n);
			
	// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || n < 1) {
    	printf("\n");
    	printf("Input tidak valid harus berupa angka\n");
    	fflush(stdin);
    	printf("\nTekan Enter Untuk Lanjut...");
    	getchar();
    	goto menu;
	}

    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        scanf("%d", &n1[i]);
   	 	}
   	
   	printf("\n\n");
	int bilGenap = 0; 	
   	for (i = 0; i < n; i++) {
   		if (n1[i] %2 == 0){
   			printf("Genap Array ke %d Adalah : %d \n", i+1, n1[i]);
   			bilGenap++;
		   }
	   }
}

void ba5pd(){
	    int n1[100], n, i, s1, b[10];

    menu:
    system("cls");
    printf("Masukkan Banyak Angka: ");
    
    b[1] = scanf("%d", &n);
			
	// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || n < 1) {
    	printf("\n");
    	printf("Input tidak valid harus berupa angka\n");
    	fflush(stdin);
    	printf("\nTekan Enter Untuk Lanjut...");
    	getchar();
    	goto menu;
	}

    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        scanf("%d", &n1[i]);
   	 	}
   	
   	int cari;
   	int jumlah = 0;
   	printf("\n\n");	
   	
   	printf("Array Berisi Angka 5 Ada Di : ");
   	for (i = 0; i < n; i++) {
   		if (n1[i] == 5){
   			jumlah ++;
   			printf("%d", i+1);
   			if (cari > 0){
   				printf(", ");
			}
   			cari ++;
		   }
		}
		printf("\nJumlah Inputan 5 Ada : %d \n", jumlah);
}

void nmmda(){
	    int n1[100], n, i, s1, b[10];

    menu:
    system("cls");
    printf("Masukkan Banyak Angka: ");
    
    b[1] = scanf("%d", &n);
			
	// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || n < 1) {
    	printf("\n");
    	printf("Input tidak valid harus berupa angka\n");
    	fflush(stdin);
    	printf("\nTekan Enter Untuk Lanjut...");
    	getchar();
    	goto menu;
	}

    for (i = 0; i < n; i++) {
        printf("Masukkan bilangan ke-%d: ", i+1);
        scanf("%d", &n1[i]);
   	 	}
   	
   	// Find minimum and maximum
    int min = n1[0];
    int max = n1[0];

    for (i = 1; i < n; i++) {
        if (n1[i] < min) {
            min = n1[i];
        }
        if (n1[i] > max) {
            max = n1[i];
        }
    }
    
    printf("\n\n");
    printf("Nilai Maximumnya Adalah: %d\n", max);
    printf("Nilai Minimumnya Adalah: %d\n", min);
}

void notif(){
	printf("Kembali Ke Menu? (Y/N) : ");
}

int main(){
	mainMenu:
	system("cls");
	printf("\n\n====================\n");
    printf("1. Nilai Rata-Rata Dengan Array\n");
    printf("2. Nilai Genap Pada Array\n");
    printf("3. Banyak Angka 5 Pada Array\n");
    printf("4. Nilai Max & Min Dengan Array\n");
    printf("5. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");
	
    // Membaca input pengguna dan memvalidasi
	b[1] = scanf("%d", &sm[1]);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[1] != 1 || getchar() != '\n' || sm[1] < 1 || sm[1] > 5) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 6.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }
    
    switch(sm[1]){
    	case 1:
    		nrda();
    		
    		subMenu1:
    		notif();
    		fflush(stdin);
    		
    		b[2] = scanf("%c", &sm1[1]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[2] != 1 || getchar() != '\n' || sm1[1] != 'y' && sm1[1] != 'n' &&  sm1[1] != 'Y' && sm1[1] != 'N') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu1;
    		} 

    		switch (sm1[1]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            	case 'Y':
            		goto mainMenu;
            		break;
        		case 'N':
            		return 0;
            		break;
    		} 
    		break;
    	case 2:
    		ngpd();
    		
    		subMenu2:
    		notif();
    		fflush(stdin);
    		
    		b[3] = scanf("%c", &sm1[2]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[3] != 1 || getchar() != '\n' || sm1[2] != 'y' && sm1[2] != 'n' &&  sm1[2] != 'Y' && sm1[2] != 'N') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu2;
    		} 

    		switch (sm1[2]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            	case 'Y':
            		goto mainMenu;
            		break;
        		case 'N':
            		return 0;
            		break;
    		}
    		break;
    	case 3:
    		ba5pd();
    		
    		subMenu3:
    		notif();
    		fflush(stdin);
    		
    		b[4] = scanf("%c", &sm1[3]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[4] != 1 || getchar() != '\n' || sm1[3] != 'y' && sm1[3] != 'n' &&  sm1[3] != 'Y' && sm1[3] != 'N') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu3;
    		} 

    		switch (sm1[3]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            	case 'Y':
            		goto mainMenu;
            		break;
        		case 'N':
            		return 0;
            		break;
    		}
    		break;
    	case 4:
    		nmmda();
    		
    		subMenu4:
    		notif();
    		fflush(stdin);
    		
    		b[5] = scanf("%c", &sm1[4]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[5] != 1 || getchar() != '\n' || sm1[4] != 'y' && sm1[4] != 'n' &&  sm1[4] != 'Y' && sm1[4] != 'N') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu4;
    		} 

    		switch (sm1[4]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            	case 'Y':
            		goto mainMenu;
            		break;
        		case 'N':
            		return 0;
            		break;
    		}
    		break;
    	case 5:
    		return;
    		break;
	}
}
