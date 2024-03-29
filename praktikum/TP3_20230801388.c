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
	int c;
	int subMenu1Option;
	int i, n, sum = 0;
	float sum1 = 0.0;
    int num;
	
mainMenu:
	system("cls");
	printf("\n\n====================\n");
    printf("1. Pembuat Program\n");
    printf("2. Penjumlahan Deret\n");
    printf("3. Menampilkan Banyak Bilangan\n");
    printf("4. Rata - rata\n");
    printf("5. Faktorial\n");
    printf("6. Keluar\n");
    printf("====================\n\n");
    printf("Masukkan Pilihan Menu: ");

    // Membaca input pengguna dan memvalidasi
	int berhasil = scanf("%d", &subMenu1Option);

    // Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    if (berhasil != 1 || getchar() != '\n' || subMenu1Option < 1 || subMenu1Option > 6) {
    	printf("\n");
        printf("Input tidak valid. Masukkan angka antara 1 dan 6.\n");
        fflush(stdin);
        printf("\nTekan Enter Untuk Lanjut...");
        getchar();
        goto mainMenu;
    }

    switch (subMenu1Option) {
        case 1:
            system("cls");
    		printf("\n");
    		printf("================================================\n");
    		printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    		printf("Nim		: 20230801388 \n");
    		printf("================================================\n");
    		printf("\n");
     		
    		
			char subMenu2Option;		
    		subMenu1_A:
    		subMenu1_A();

    		// Membaca input pengguna dan memvalidasi
			int berhasil1 = scanf("%c", &subMenu2Option);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (berhasil != 1 || getchar() != '\n' || subMenu2Option != 'y' && subMenu2Option != 'n') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu1_A;
    		} 

    		switch (subMenu2Option) {
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
        	system("cls");
        	printf("\n");
            printf("Masukkan jumlah elemen deret: ");
            scanf("%d", &n);
			
        	sum = 0;
   		
            for (i = 1; i <= n; i++) {
                sum += i;
            }
            
            for (i = n; i >= 1; i--) {
        		printf("%d", i);
        		if (i != 1)
            	printf(" + ");
    		}
			
			printf("\n");
            printf("Jumlah deret aritmatika dari 1 hingga %d adalah: %d\n", n, sum);
            printf("\n");
            
            char subMenu3Option;		
    		subMenu2_A:
    		subMenu1();
    		fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			int berhasil2 = scanf("%c", &subMenu3Option);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (berhasil2 != 1 || getchar() != '\n' || subMenu3Option != 'y' && subMenu3Option != 'n' && subMenu3Option != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu2_A;
    		} 

    		switch (subMenu3Option) { 
        		case 'y':
            		goto mainMenu;
            		break;
            	case 'c':
            		goto Menu2;
            		break;
        		case 'n':
            		return 0;
            		break;
    		} 
            break;
        case 3:
        	Menu3:
        	system("cls");
            printf("Masukkan Angka Awal: ");
            scanf("%d", &n);
            
            int m;
            printf("Masukkan Angka Akhir: ");
            scanf("%d", &m);
            
            int bilGenap;
            bilGenap = 0;
            printf("\nBilangan Genap = ");
            for (i = n; i <= m;i++){
            	if (i %2 ==0)
            	{
            		printf("%d ", i);
            		bilGenap++;
				}
			}
			
			
            int bilGanjil;
            bilGanjil = 0;
            printf("\n\nBilangan Ganjil = ");
            for (i = n; i <= m;i++){
            	if (i %2 !=0)
            	{
            		printf("%d ", i);
            		bilGanjil++;
				}
			}
            
			int bilKel7;
			bilKel7 = 0;
            printf("\n\nBilangan kelipatan 7 = ");
            for (i = n; i <= m;i++)
			{
            	if (i %7 == 0)
            	{
            		printf("%d ", i);
            		bilKel7++;
				}
			}
			
			printf("\n\njumlah bilangan genap = %d ", bilGenap);
			printf("\njumlah bilangan ganjil = %d ", bilGanjil);
			printf("\njumlah bilangan kelipatan 7 = %d ", bilKel7);
            
            printf("\n");
            
            char subMenu4Option;		
    		subMenu3_A:
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			int berhasil3 = scanf("%c", &subMenu4Option);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (berhasil3 != 1 || getchar() != '\n' || subMenu4Option != 'y' && subMenu4Option != 'n' && subMenu4Option != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu3_A;
    		} 

    		switch (subMenu4Option) {
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
            scanf("%d", &n);
			
			float rata_rata;
			
            if (n <= 0) {
            	printf("Jumlah harus lebih dari 0.\n");
                break; // Lanjutkan pemilihan menu
                }
                
			sum1 = 0;
            for (i = 1; i <= n; i++) {
                float n;
                printf("Masukkan bilangan ke-%d: ", i);
                scanf("%f", &n);
                sum1 += n;
            }
            
			rata_rata = sum1 / n;
            
            printf("Rata-rata dari %d bilangan yang dimasukkan adalah: %.2f\n", n, rata_rata);
            fflush(stdin);
            
            char subMenu5Option;		
    		subMenu4_A:
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			int berhasil4 = scanf("%c", &subMenu5Option);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (berhasil4 != 1 || getchar() != '\n' || subMenu5Option != 'y' && subMenu5Option != 'n' && subMenu5Option != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu4_A;
    		} 

    		switch (subMenu5Option) {
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
    		scanf("%d", &num);
    
			if (num < 0) {
        		printf("Faktorial dari bilangan negatif tidak terdefinisi.\n");
        		return;  // Keluar dari program karena input tidak valid
    		} 
	
			int hasil;
    		hasil = factorial(num);  // Hitung faktorial
	
    		printf("%d! = ", num);
    		for (i = num; i >= 1; i--) {
        		printf("%d", i);
        		if (i != 1){
            	printf(" * ");
            	}
    		}

    		printf(" = %d\n", hasil);
    		
    		char subMenu6Option;		
    		subMenu5_A:
    		subMenu1();
			fflush(stdin);
			
    		// Membaca input pengguna dan memvalidasi
			int berhasil5 = scanf("%c", &subMenu6Option);

    		// Memeriksa apakah input adalah angka tunggal dan berada dalam rentang yang valid
    		if (berhasil5 != 1 || getchar() != '\n' || subMenu6Option != 'y' && subMenu6Option != 'n' && subMenu6Option != 'c') {
    			printf("\n");
        		printf("Input tidak valid. Masukkan huruf antara y dan n.\n");
        		fflush(stdin);
        		printf("\nTekan Enter Untuk Lanjut...");
        		getchar();
        		goto subMenu5_A;
    		} 

    		switch (subMenu6Option) {
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
           	return;
            break;
    }
}
