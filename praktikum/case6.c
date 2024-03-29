#include <stdio.h>

void displayPattern(int rows) {
    int m = rows * rows;
    int i;
    int j;
    
    for (i = 1; i <= m; i += 2) {
        for ( j = 1; j <= i; j++) {
            if (m >= 1)
                printf("%d ", m--);
        }
        printf("\n");
    }
}

int main() {
    int rows;

    printf("Masukkan jumlah baris: ");
    if (scanf("%d", &rows) != 1 || rows < 1) {
        printf("Input tidak valid. Harus berupa angka positif.\n");
        return 1;
    }

    displayPattern(rows);

    return 0;
}



