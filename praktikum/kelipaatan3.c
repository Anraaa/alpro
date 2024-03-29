/*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int cekBilangan, cekKelipatan3, cekGanjil;
	printf("=====================================\n");
	printf("Aplikasi Pengecek Kelipatan Tiga & Ganjil\n");
	printf("=====================================\n");
	
	printf("Masukkan Bilangan : ");
	scanf("%d", &cekBilangan);
	
	cekKelipatan3 = cekBilangan % 3;
	if (cekKelipatan3 == 0)
	{
		printf("Bilangan merupakan kelipatan tiga \n");
	}
	else
	{
		printf("Bilangan bukan merupakan kelipatan tiga \n");
	}
}
