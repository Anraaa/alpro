  /*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int _Menu1, _Menu2, subMenu;
	int iSisi, iPanjang, iLebar, iLuas, iKeliling;
	
	system("CLS");
	printf("Tugas Praktikum ALPRO 1 [keliling & luas]\n");
	printf("=========================================\n");
	printf("Nama		: Aqla Harun Ramadhani Johananda \n");
	printf("NIM			: 20230801388 \n");
	printf("=========================================\n");
	printf("\n");
	printf("welcome, ");
	system("PAUSE");
Awal:
	system("CLS");
	printf("=========================================\n");
	printf("Aplikasi Penghitung Keliling & Luas\n");
	printf("=========================================\n");
	printf("PAUSE");
	
Menu1:
	printf("1. Persegi\n");
	printf("2. Persegi Panjang\n");
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &_Menu1);
	
	switch(_Menu1)
	{
		default: printf("Masukkan Pilihan Salah.\n");
				 printf("Silahkan Coba Lagi.\n");
				 
				 getch();
				 
				 break;
				 
		case 1: printf("\n");
				printf("====================\n");
				printf("Persegi\n");
				printf("====================\n");
				printf("Masukkan Sisi 	: ");
				scanf("%d", &iSisi);
				
Menu2_A:
				printf("\n");
				printf("====================\n");
				printf("Penghitungan\n");
				printf("====================\n");
				printf("1. Keliling\n");
				printf("2. Luas\n");
				printf("Masukkan Pilihan Menu : ");
				scanf("%d", &_Menu2);
				printf("\n");
				
				switch(_Menu2)
				{
						default: printf("Pilihan Menu Tidak Ada\n");
								 printf("Silahkan Coba Lagi.\n");
						
								 getch();
								 goto Menu2_A;
						
								 break;
								 
						case 1: iKeliling = iSisi * 4;
								printf("Maka, Keliling Persegi : %d \n", iKeliling);
								
								break;
								
						case 2: iLuas = iSisi * iSisi;
								printf("Maka, Luas Persegi : %d \n", iSisi);
								
								break;
						
								
		case 2: printf("\n");
				printf("====================\n");
				printf("Persegi Panjang\n");
				printf("====================\n");
				printf("Masukkan Panjang 	: ");
				scanf("%d", &iPanjang);
				printf("Masukkan Lebar	: ";);
				scanf("%d", iLebar);
				
Menu2_B:
				printf("\n");
				printf("====================\n");
				printf("Penghitungan\n");
				printf("====================\n");
				printf("1. Keliling\n");
				printf("2. Luas\n");
				printf("Masukkan Pilihan Menu : ");
				scanf("%d", &_Menu2);
				printf("\n");
					
				switch(_Menu2)
				{
						default: printf("Pilihan Menu Tidak Ada\n");
								 printf("Silahkan Coba Lagi.\n");
						
								 getch()
								 goto Menu2_B
						
								 break;
								 
						case 1: iLuas = iPanjang * iLebar;
								printf("Maka, Luas Persegi Panjang : %d \n", iLuas)
								
								break;
								
						case 2: iKeliling = (2*iPanjang) + (2*iLebar);
								printf("Maka, Luas Persegi : %d \n", iKeliling)
								
								break;
				}
				break;
	}
SubMenu:
	printf("\n");
	printf("==================\n");
	printf("==================\n");
	printf("1. Kembali Ke Awal\n");
	printf("2. Keluar Aplikasi\n");
	
	printf("\n");
	printf("Masukkan Pilihan Menu : ");
	scanf("%d", &subMenu)
	
	switch (subMenu)
	{
		default: printf("Pilihan Menu TIdak Ada\n");
				 printf("Silahkan Coba Lagi\n");
				 printf("\n");
				 
				 goto SubMenu;
				 break;
		case 1: goto Awal;
				break;
		case 2: return 0;
			break;
	}
}

