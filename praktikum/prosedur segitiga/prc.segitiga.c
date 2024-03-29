#include "lib.segitiga.h"
#include "math.h"



void keliling(int sisi1, int sisi2, int sisi3, double *keliling){
	*keliling = sisi1 + sisi2 + sisi3;
}

void setengahKeliling(int sisi1, int sisi2, int sisi3, double *setengah_keliling) {
    double kelilingValue;
    keliling(sisi1, sisi2, sisi3, &kelilingValue);  
    *setengah_keliling = kelilingValue / 2.0;
}

void segitiga(int sm){
	int sisi1, sisi2, sisi3;
	
	printf("Masukkan Sisi A: ");
	scanf("%d", &sisi1);
	printf("Masukkan Sisi B: ");
	scanf("%d", &sisi2);
	printf("Masukkan Sisi C: ");
	scanf("%d", &sisi3);
	
	// Menghitung keliling segitiga
	double kelilingValue;
	keliling(sisi1, sisi2, sisi3, &kelilingValue);
	printf("\n");
	printf("Keliling Segitiga: %.2lf\n", kelilingValue);	

	// Menghitung Setengah keliling
	double setengah_kelilingValue;
    setengahKeliling(sisi1, sisi2, sisi3, &setengah_kelilingValue);
    printf("Setengah keliling segitiga: %.2lf\n", setengah_kelilingValue);
	
	
	// Menghitung luas segitga
	double luas;
	luas = (1.0 / 4.0) * sqrt(4.0 * sisi1 * sisi1 - sisi2 * sisi2);
	printf("Hasil luas segitiga: %lf\n", luas);
	
	// mengecek Jenis Segitiga
	if (sisi1 == sisi2 && sisi2 == sisi3 ){
		printf("\n");
		printf("Segitiga Sama Sisi\n");
		printf("\n");
    	
    	// Menghitung tinggi segitiga sama sisi
    	float tinggi;
    	tinggi = sisi1 * sqrt(3) / 2;
    	
    	// Menampilkan hasil
    	printf("Tinggi segitiga sama sisi: %.2f", tinggi);
	}
	else if (sisi1 == sisi2 || sisi2 == sisi3 || sisi1 == sisi3){
		printf("\n");
		printf("Segitiga Sama Kaki\n");
		printf("\n");
	}
	else {
		printf("\n");
		printf("Segitiga Sembarang\n");
		printf("\n");
	}
}
