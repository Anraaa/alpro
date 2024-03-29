/*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int tanggal;
	char bulan[15];
	int tahun;
}waktu;

int main()
{
	waktu kalender;
	
	printf("Masukkan Tanggal : ");
	scanf("%d", &kalender.tanggal);
	
	printf("Masukkan Bulan : ");
	scanf("%s", &kalender.bulan);
	
	printf("Masukkan Tahun : ");
	scanf("%s", &kalender.tahun);
	
	printf("\n");
	printf("Tanggal Hari Ini : %d %s %s", kalender.tanggal, &kalender.bulan, &kalender.tahun);
	
	getch();
	return 0;
}
