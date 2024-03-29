#include <stdio.h>

int main() {
    int jumlah_angka;
    printf("Masukan Jumlah Angka Yang Diinginkan: ");
    scanf("%d", &jumlah_angka);

    int angka_list[jumlah_angka];
    for (int i = 0; i < jumlah_angka; i++) {
        printf("Masukan Angka ke-%d: ", i);
        scanf("%d", &angka_list[i]);
    }

    // Calculate the average
    double rerata = 0;
    for (int i = 0; i < jumlah_angka; i++) {
        rerata += angka_list[i];
    }
    rerata /= jumlah_angka;
    printf("\nRerata: %f\n", rerata);

    // Sort the array
    for (int i = 0; i < jumlah_angka - 1; i++) {
        for (int j = 0; j < jumlah_angka - i - 1; j++) {
            if (angka_list[j] > angka_list[j + 1]) {
                // swap
                int temp = angka_list[j];
                angka_list[j] = angka_list[j + 1];
                angka_list[j + 1] = temp;
            }
        }
    }


    printf("\nSetelah Diurutkan:\n");
    int new_line_printed = 0;

    for (int i = 0; i < jumlah_angka; i++) {
        if (angka_list[i] > rerata && !new_line_printed) {
            printf("\n------------------------------\n");
            new_line_printed = 1;
        }

        printf("angka ke-%d : %d\n", i, angka_list[i]);
    }

    return 0;
}
