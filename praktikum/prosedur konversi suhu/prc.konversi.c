#include "lib.konversi.h"

void celcius(int sm){
    switch(sm){
    	case 1:
    		ckf();
    		break;
    	case 2:
    		ckr();
    		break;
    	case 3:
    		ckk();
    		break;
	}
}

void ckf(){
	double celcius, fahrenreit;
	
	printf("Masukkan Suhu dalam Celcius : ");
	scanf("%lf", &celcius);
	
	fahrenreit = (celcius * 9/5) + 32;
	
	printf("%.2lf C sama dengan %.2lf F\n", celcius, fahrenreit);
}

void ckr(){
	double celcius, reamur;
	
	printf("Masukkan Suhu dalam Celcius : ");
	scanf("%lf", &celcius);
	
	reamur = celcius * 4/5;
	
	printf("%.2lf C sama dengan %.2lf R\n", celcius, reamur);
}

void ckk(){
	double celcius, kelvin;
	
	printf("Masukkan Suhu dalam Celcius : ");
	scanf("%lf", &celcius);
	
	kelvin = celcius + 273.15;
	
	printf("%.2lf C sama dengan %.2lf K\n", celcius, kelvin);
}
