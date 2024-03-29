/*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Bulan;
	printf("=======================================\n");
	printf("Aplikasi Konversi Angka Ke Bulan\n");
	printf("=======================================\n");
	
	printf("Masukkan Bulan : ");
	scanf("%d", &Bulan);
	
	switch (Bulan)
	{
		default: printf("Masukkan Bulan Salah.\n");
				 printf("Silahkan Coba Lagi.\n");
				 
				 getch();
				 
				 break;
				 
			case 1: printf("Bulan Merupakan Bulan Januari.\n");
					break;
			case 2: printf("Bulan Merupakan Bulan Februari.\n");
					break;
			case 3: printf("Bulan Merupakan Bulan Maret.\n");
					break;
			case 4: printf("Bulan Merupakan Bulan April.\n");
					break;
			case 5: printf("Bulan Merupakan Bulan Mei.\n");
					break;
			case 6: printf("Bulan Merupakan Bulan Juni.\n");
					break;
			case 7: printf("Bulan Merupakan Bulan Juli.\n");
					break;
			case 8: printf("Bulan Merupakan Bulan Agustus.\n");
					break;
			case 9: printf("Bulan Merupakan Bulan September.\n");
					break;
			case 10: printf("Bulan Merupakan Bulan Oktober.\n");
					break;
			case 11: printf("Bulan Merupakan Bulan November.\n");
					break;
			case 12: printf("Bulan Merupakan Bulan Desember.\n");
					break;
	}
}
