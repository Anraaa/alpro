#include <stdio.h>
#include <locale.h>

typedef struct{
	char nama[50];
	int harga;
} Menu;

//Menampilkan Menu Secara Urut
void tampilkanMenu(Menu daftarMenu[], int jumlahMenu) {
	int i;
	for(i = 0; i < jumlahMenu; i++){
		setlocale(LC_NUMERIC, "id_ID");
		printf("%d. %s - Rp%d\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
	}
}

void clear_input_buffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

void rincianPesan(int i, Menu daftarMenu[], int jumlahMenu, int jumlahPesan[], float *totalHarga) {
    printf("\nRincian pesanan:\n");
    for (i = 0; i < jumlahMenu; i++) {
        if (jumlahPesan[i] > 0) {
            setlocale(LC_NUMERIC, "id_ID");
            printf("%s x %d = Rp%d\n", daftarMenu[i].nama, jumlahPesan[i], daftarMenu[i].harga * jumlahPesan[i]);
            *totalHarga += daftarMenu[i].harga * jumlahPesan[i];
        }
    }
}

void tampilHarga(float totalHarga, float totalAkhir, float pajak){
	printf("\nTotal harga sebelum pajak: Rp%.2f\n", totalHarga);
    printf("Pajak (10%%): Rp%.2f\n", pajak);
    printf("Total harga setelah pajak: Rp%.2f\n", totalAkhir);
}

int main(){
	int i;
	int subMenu;
Awal:	
	// Identitas Mahasiswa
    system("cls");
    printf("Tugas Praktikum ALPRO 2 [Penjualan] \n");
    printf("\n");
    printf("================================================\n");
    printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    printf("Nim		: 20230801388 \n");
    printf("================================================\n");
    printf("\n");
    printf("Selamat Datang, ");
    system("pause");
    
Menu: 
	// Tampilan Awal
	system("cls");
	printf("=============================\n");
	printf("Warung Alpukat Ngocok\n");
	printf("-----------------------------\n");
	printf("\n");
	printf("=============================\n");
	printf("\n");
	
	//Daftar Menu
	printf("Pilihan Daftar Menu\n");
	printf("====================\n");
	Menu daftarMenu[] = {
        {"Alpucok Small", 7000.0},
        {"Alpucok Medium", 10000.0},
        {"Alpucok Large", 12000.0},
        {"Alpucok Oreo Large", 14000.0},
        {"Alpucok Matcha Large", 12000.0}
    };
    
    //Membaca Daftar Menu 
    int jumlahMenu = sizeof(daftarMenu) / sizeof(daftarMenu[0]);
  	int jumlahPesan[jumlahMenu];
    
    // Inisialisasi jumlah pesanan
    for (i = 0; i < jumlahMenu; i++) {
        jumlahPesan[i] = 0;
    }

    // Menampilkan Daftar Menu dan Harganya
    tampilkanMenu(daftarMenu, jumlahMenu);
    printf("====================\n");

    // Mendeklarasikan Nomor Nemu, Jumlah Barang Yang Ingin Dipesan dan Total Harga
    int nomorMenu, jumlahPesanMenu;
	float totalHarga = 0.0;
    
    // Sebuah Kondisi Perulangan
    while (1) {
    	printf("Pilih menu (masukkan nomor menu, 0 untuk selesai): ");
    	scanf("%d", &nomorMenu);
    	
    	switch(nomorMenu){
    		case 0: 
    				break;
    		
    		default:
    			 // Cek validitas nomor menu
    			if (nomorMenu < 1 || nomorMenu > jumlahMenu) {
    				printf("Nomor menu tidak valid. Silakan masukkan nomor menu yang benar.\n");
    				clear_input_buffer();
                    continue;
				}
			
			// Menginput Jumlah Menu Yang Ingin Dipesan	
			printf("Masukkan jumlah menu '%s': ", daftarMenu[nomorMenu - 1].nama);
            int jumlahPesanMenu;
            scanf("%d", &jumlahPesanMenu);
            clear_input_buffer();
            
            // Update jumlah pesanan
            jumlahPesan[nomorMenu - 1] += jumlahPesanMenu;
            break;
		}
		if (nomorMenu == 0)
            break;
        
	}
	
	// Struk Pemesanan
    rincianPesan(i, daftarMenu, jumlahMenu, jumlahPesan, &totalHarga);
	
	// Pajak
    float pajak = totalHarga * 0.10;
    float totalAkhir = totalHarga + pajak;
	
	// Menampilkan Harga Keseluruhan
    tampilHarga(totalHarga, totalAkhir, pajak);
    
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
