#include<stdio.h>

int main(){
	int hasil1, hasil2;
	
	printf("Masukan Range Awal : ");
	scanf("%d", &hasil1);
	printf("Masukan Range Akhir: ");
	scanf("%d", &hasil2);
	
	int i;
	for(i=hasil1; i <= hasil2; i++)	
	{
		printf("%d", i);
	}
	
}
