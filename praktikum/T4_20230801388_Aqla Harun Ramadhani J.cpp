#include <stdio.h>
int j, n, i;

void tadika_mesra() {
    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf(" *");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf("  ");
        }
        for ( j = 1; j <= i; j++) {
            printf(" *");
        }
        printf("\n");
    }

    for ( i = 1; i <= n; i++) {
        for ( j = 1; j <= i; j++) {
            printf("  ");
        }
        for ( j = 0; j <= 2 * (n - i); j++) {
            printf(" *");
        }
        printf("\n");
    }
}

int main() {
	
    printf("Masukkan jumlah baris: ");
    scanf("%d", &n);

    tadika_mesra();

    return 0;
}
