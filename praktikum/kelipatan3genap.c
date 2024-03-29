/*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cekBilangan, cekKelipatan3, cekGenap;
	printf("=======================================\n");
	printf("Aplikasi Pengecek Kelipatan 3 & Genap\n");
	printf("=======================================\n");
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);
	
	cekGenap = cekBilangan % 2;
	cekKelipatan3 = cekBilangan % 3;
	
	// Disini itu kelipatan 5
	if (cekKelipatan3 == 0)
	{
		if (cekGenap == 0)
		{
			printf("Genap & Kelipatan 3 \n");
		}
		else if (cekGenap == 1)
		{
			printf("Tidak Genap & kelipatan 3 \n");
		}
	}
	// Bukan kelipatan 5
	else
	{
		if (cekGenap == 0)
		{
			printf("Genap & Tidak Kelipatan 3 \n");	
		}
		else if (cekGenap == 1)
		{
			printf("Genap & Tidak Kelipatan 3 \n");
		}
	}
}
