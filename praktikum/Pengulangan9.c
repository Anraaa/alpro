#include <stdio.h>

int main(){
	int angka, hasil, i;
	
	printf("Masukan Faktorial : ");
	scanf("%d", &angka);
	hasil = 1;
	printf("Faktorial: %d ! = ", angka);
	for(i = angka; i > 0; i--){
		hasil = hasil * i;
		printf("%d", i);
		switch(i != 1){
			case 1 : printf(" * ");
					 break;
		}
	}
	
	printf(" = %d\n", hasil);
	return 0;
	
	
/*	switch (faktor){
		case 1 : hasil = faktor;
				printf(" 1 x 1 = %d", hasil);
				break;
		case 2 : hasil = faktor * 1;
				printf(" 2 x 1 = %d", hasil);
				break;
		case 3 : hasil = faktor * 2 * 1;
				printf(" 3 x 2 x 1 = %d", hasil);
				break;
		case 4 : hasil = faktor * 3 * 2 * 1;
				printf(" 4 x 3 x 2 x 1 = %d", hasil);
				break;
		case 5 : hasil = faktor * 4 * 3 * 2 * 1;
				printf("5 x 4 x 3 x 2 x 1 = %d", hasil);
				break;
	}*/
}
