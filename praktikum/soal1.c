#include <stdio.h>
#include <math.h>

int main(){
	int subMenu;
	double a, b, c, hitung;
	
Awal:
	system("cls");
	printf("========================\n");
	printf("Nama		: Aqla Harun Ramadhani Johananda\n");
	printf("Nim		: 20230801388\n");
	printf("========================\n");
	printf("Welcome.. \n");
	system("pause");
	
Menu: 
	//Masukkan Koefisien a,b, c
	system("cls");
	printf("Masukan Nilai A: ");
	scanf("%lf", &a);
	printf("Masukan Nilai B: ");
	scanf("%lf", &b);
	printf("Masukan Nilai C: ");
	scanf("%lf", &c);
	
	
	double d = pow(b, 2) - 4 * a * c;
	int hasil, hasil1;
	
	if (d == 0) { // Akar real sama
        double x1 = -b / (2 * a);
        printf("Akar Real Sama dan X1: %lf \\n", x1);
    } else if (d < 0) { // Akar imajiner
        double x1 = -b / (2 * a);
        double x2 = sqrt(fabs(d)) / (2 * a);
        
        printf("Akar Imajiner \n");
        hasil = x1 + x2;
        printf("Akar Kompleks Pertama = %d \n", hasil);
        
        hasil1 = x1 - x2;
        printf("Akar Kompleks Kedua   = %d \n", hasil1);
        
    } else { // Akar real berbeda
        double x1 = (-b + sqrt(d)) / (2 * a);
        double x2 = (-b - sqrt(d)) / (2 * a);
        printf("Akar Real dan Berbeda \n");
        printf("cetak x1 = %lf \n", x1);
        printf("cetak x2 = %lf \n", x2);
    }
}

