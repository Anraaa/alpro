#include <stdio.h>

int factorial(int num) {
    if (num == 0 || num == 1){
        return; 
    } else {
        return num * factorial(num - 1);
	}
}

int main() {
    int num;
    printf("Masukkan bilangan untuk dihitung faktorial: ");
    scanf("%d", &num);
    
	if (num < 0) {
        printf("Faktorial dari bilangan negatif tidak terdefinisi.\n");
        return 1;  // Keluar dari program karena input tidak valid
    } 
	
	int hasil;
    hasil = factorial(num);  // Hitung faktorial
	
	int i;
    printf("%d! = ", num);
    for (i = num; i >= 1; i--) {
        printf("%d", i);
        if (i != 1)
            printf(" * ");
    }

    printf(" = %d\n", hasil);
}

