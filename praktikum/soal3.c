#include <stdio.h>

int main(){
	int input1, input2, input3;
	
Awal:	
	// Identitas Mahasiswa
    system("cls");
    printf("Tugas Praktikum ALPRO 2 [Segitiga] \n");
    printf("\n");
    printf("================================================\n");
    printf("Nama		: Aqla Harun Ramadhani Johananda \n");
    printf("Nim		: 20230801388 \n");
    printf("================================================\n");
    printf("\n");
    printf("Selamat Datang, ");
    system("pause");
	
Menu
	printf("Masukkan Input Pertama : ");
	scanf("%d", &input1);
	printf("Masukkan Input Kedua : ");
	scanf("%d", &input2);
	printf("Masukkan Input Ketiga : ");
	scanf("%d", &input3);
	
	
	int max, mid, min;
	
	if (input1 >= input2 && input1 >= input3) {
        max = input1;
        if (input2 >= input3) {
            mid = input2;
            min = input3;
        } else {
            mid = input3;
            min = input2;
        }
    } else if (input2 >= input1 && input2 >= input3) {
        max = input2;
        if (input1 >= input3) {
            mid = input1;
            min = input3;
        } else {
            mid = input3;
            min = input1;
        }
    } else {
        max = input3;
        if (input1 >= input2) {
            mid = input1;
            min = input2;
        } else {
            mid = input2;
            min = input1;
        }
    }

	printf("Urutan Dari Terbesar Hingga Terkecil: %d, %d, %d\n", max, mid, min);
}
