#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1){
        return; 
    } else {
        return num * factorial(num - 1);
	}
}

void subMenu1(){
	printf("Kembali ke Menu Utama Atau Clear? (Y/N/C): ");
}

void subMenu1_A(){
	printf("Kembali ke Menu Utama? (Y/N): ");
}

int main(){
	int c[10];
	int sm[10];
	char sm1[10];
	int i[10]; 
	int n[10]; 
	int m[10]; 
	int s[10];
	float s1[10];
    int nm[10];
    int b[15];
	
do{
mainMenu:
	system("cls");
	printf("\n\n====================\n");
    printf("1. Pembuat Program\n");
    printf("2. Penjumlahan Deret\n");
    printf("3. Menampilkan Banyak Bilangan\n");
    printf("4. Rata - rata\n");
    printf("5. Faktorial\n");
    printf("6. Deret Mundur\n");
    printf("7. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");
	
    // Membaca input pengguna dan memvalidasi
	b[2] = scanf("%d", &sm[1]);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (b[2] != 1 || getchar() != '\n' || sm[1] < 1 || sm[1] > 7) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 6.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }

    switch (sm[1]) {
        case 1:
            system("cls");
    		printf("\n");
    		printf("================================================\n");
    		printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    		printf("Nim		: 20230801388 \n");
    		printf("================================================\n");
    		printf("\n");
     			
    		subMenu1_A:
    		subMenu1_A();

    		// Membaca input pengguna dan memvalidasi
			b[5] = scanf("%c", &sm1[9]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[5] != 1 || getchar() != '\n' || sm1[9] != 'y' && sm1[9] != 'n') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu1_A;
    		} 

    		switch (sm1[9]) {
        		case 'y':
            		goto mainMenu;
            		break;
        		case 'n':
            		return 0;
            		break;
    		} 
			  		
            break;
            
        case 2:
        	Menu2:
        	n[4] = 0;
        	
        	system("cls");
        	printf("\n");
            printf("Masukkan jumlah elemen deret: ");
            
            // Membaca input pengguna dan memvalidasi
            b[1] = scanf("%d", &n[4]);
			
			// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[1] != 1 || getchar() != '\n' || n[4] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu2;
			}
			
        	s[5] = 0;
   	
            for (i[2] = 1; i[2] <= n[4]; i[2]++) {
                s[5] += i[2];
            }
            
	            for (i[2] = n[4]; i[2] >= 1; i[2]--) {
        		printf("%d", i[2]);
        		if (i[2] != 1)
            	printf(" + ");
    		}
			
			printf("\n");
            printf("Jumlah deret aritmatika dari 1 hingga %d adalah: %d\n", n[4], s[5]);
            printf("\n");
            		
    		subMenu2_A:
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
        		goto subMenu2_A;
    		} 

    		switch (sm1[9]) {
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
        case 3:
        	Menu3:
        	system("cls");
            printf("Masukkan Angka Awal: ");
            
            // Membaca input pengguna dan memvalidasi
            b[3] = scanf("%d", &n[1]);
			
			// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[3] != 1 || getchar() != '\n' || n[1] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu3;
			}
            
            printf("Masukkan Angka Akhir: ");
            
            // Membaca input pengguna dan memvalidasi
            b[3] = scanf("%d", &m[8]);
			
			// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[3] != 1 || getchar() != '\n' || m[8] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu3;
			}
            
            int bilGenap;
            bilGenap = 0;
            printf("\nBilangan Genap = ");
            for (i[4] = n[1]; i[4] <= m[8];i[4]++){
            	if (i[4] %2 == 0)
            	{
            		printf("%d ", i[4]);
            		bilGenap++;
				}
			}
			
            int bilGanjil;
            bilGanjil = 0;
            printf("\n\nBilangan Ganjil = ");
            for (i[4] = n[1]; i[4] <= m[8];i[4]++){
            	if (i[4] %2 != 0)
            	{
            		printf("%d ", i[4]);
            		bilGanjil++;
				}
			}
            
			int bilKel7;
			bilKel7 = 0;
            printf("\n\nBilangan kelipatan 7 = ");
            for (i[4] = n[1]; i[4] <= m[8];i[4]++)
			{
            	if (i[4] %7 == 0)
            	{
            		printf("%d ", i[4]);
            		bilKel7++;
				}
			}
			
			printf("\n\njumlah bilangan genap = %d ", bilGenap);
			printf("\njumlah bilangan ganjil = %d ", bilGanjil);
			printf("\njumlah bilangan kelipatan 7 = %d ", bilKel7);
            
            printf("\n");
            	
    		subMenu3_A:
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			b[6] = scanf("%c", &sm1[7]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[6] != 1 || getchar() != '\n' || sm1[7] != 'y' && sm1[7] != 'n' && sm1[7] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu3_A;
    		} 

    		switch (sm1[7]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu3;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
            break;
        case 4:
        	Menu4:
        	system("cls");
            printf("Masukkan jumlah bilangan yang ingin dihitung rata-ratanya: ");
            
            // Membaca input pengguna dan memvalidasi
            b[8] = scanf("%d", &n[9]);
			
			// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[8] != 1 || getchar() != '\n' || n[9] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu4;
			}
			
			float r[12];
			
            if (n[9] <= 0) {
            	printf("Jumlah harus lebih dari 0.\n");
                break; // Lanjutkan pemilihan menu
                }
                
			s1[3] = 0;
            for (i[6] = 1; i[6] <= n[9]; i[6]++) {
                float n1[7];
                printf("Masukkan bilangan ke-%d: ", i[6]);
                scanf("%f", &n1[7]);
                s1[3] += n1[7];
            }
            
			r[4] = s1[3] / n[9];
            
            printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", n[9], r[4]);
            fflush(stdin);
            		
    		subMenu4_A:
    			
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			b[15] = scanf("%c", &sm1[1]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[15] != 1 || getchar() != '\n' || sm1[1] != 'y' && sm1[1] != 'n' && sm1[1] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu4_A;
    		} 

    		switch (sm1[1]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu4;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
            break;
        case 5:
        	Menu5:
        	system("cls");
            printf("Masukkan bilangan untuk dihitung faktorial: ");
    		// Membaca input pengguna dan memvalidasi
            b[14] = scanf("%d", &nm[3]);
			
			// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[14] != 1 || getchar() != '\n' || nm[3] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu5;
			}
    
			if (nm[3] < 0) {
        		printf("Faktorial dari bilangan negatif tidak terdefinisi.\n");
        		return;  // Keluar dari program karena input tidak valid
    		} 
	
			int h[21];
    		h[17] = factorial(nm[3]);  // Hitung faktorial
	
    		printf("%d! = ", nm[3]);
    		for (i[9] = nm[3]; i[9] >= 1; i[9]--) {
        		printf("%d", i[9]);
        		if (i[9] != 1){
            	printf(" * ");
            	}
    		}

    		printf(" = %d\n", h[17]);
    		
    		char sm1[3];		
    		subMenu5_A:
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			b[13] = scanf("%c", &sm1[3]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[13] != 1 || getchar() != '\n' || sm1[3] != 'y' && sm1[3] != 'n' && sm1[3] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu5_A;
    		} 

    		switch (sm1[3]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu5;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
            break;
        case 6:
        	// bu ini rumusnya saya dapet dari farhan bu 
        	Menu6:
        	system("cls");
           	m[10] = 2;
           	i[7] = 2;
           	s[2] = 2;
           	
           	printf("\n");
           	printf("Masukkan jumlah baris: ");
           	b[11] = scanf("%d", &n[5]);

    		if (b[11] != 1 || getchar() != '\n' || n[5] < 1) {
    			printf("\n");
        		printf("Input tidak valid harus berupa angka\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto Menu6;
    		} else {
    			m[10] = n[5] * n[5]; 
    			for (i[7] = 1; i[7] <= m[10]; i[7] += 2){
    				for (s[2] = 1; s[2] <= i[7]; s[2]++){
    					printf("%d ", m[10]--);
					}
					printf("\n");
				}
			}
			
			subMenu6_A:
    		subMenu1();
			fflush(stdin);
			
			// Membaca input pengguna dan memvalidasi
			b[8] = scanf("%c", &sm1[7]);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (b[8] != 1 || getchar() != '\n' || sm1[7] != 'y' && sm1[7] != 'n' && sm1[7] != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y, n, dan c.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu6_A;
    		} 

    		switch (sm1[7]) {
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu6;
            		break;
        		case 'n':
            		return;
            		break;
    		} 
            break;
        case 7:
           	return;
            break;
    	}
    
    }  while (sm[1] > 7);
}
