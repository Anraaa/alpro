/*
	Nama	: Aqla Harun Ramadhani Johananda
	Nim		: 20230801388
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char nama[20];
	char nim[12];
	char alamat[30];
	
	printf("Masukkan Nama	: ");
	scanf("%19s", &nama);
	
	printf("Masukkan Nim	: ");
	fflush(stdin);
	gets(nim);
	
	printf("Masukkan Alamat	: ");
	scanf("%29s", &alamat);
	
	printf("Nama		: %s \n", nama);
	printf("Nim			: %s \n", nim);
	printf("Alamat		: %s \n", alamat);
	
	getch();
	return 0;
}
