#include "lib.Faktorial.h"


int rekursif(int num) {
    if (num == 0 || num == 1){
        return; 
    } else {
        return num * rekursif(num - 1);
	}
}

void faktorial(int num) {
	int hasil;
    hasil = rekursif(num);  // Hitung faktorial
	
	int i;
    printf("%d! = ", num);
    for (i = num; i >= 1; i--) {
        printf("%d", i);
        if (i != 1)
            printf(" * ");
    }
    
    printf(" = %d\n", hasil);
}
