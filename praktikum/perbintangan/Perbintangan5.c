#include <stdio.h>

int main() {
    int tinggi;

    printf("Masukkan tinggi huruf M: ");
    scanf("%d", &tinggi);
	
	int i, j;
    for ( i = 0; i < tinggi; i++) {
        for ( j = 0; j < tinggi * 2 - 1; j++) {
            if (j == 0 || j == tinggi * 2 - 2 || (i == j && j <= tinggi - 1) || (j == tinggi * 2 - 2 - i && j >= tinggi)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

