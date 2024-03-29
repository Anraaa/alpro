#include <stdio.h>

int main() {
    int num = 100;  // Variabel integer biasa
    int *address;  // Pointer yang akan menunjuk alamat integer

    address = &num;  // Menyimpan alamat variabel num ke dalam pointer address

    printf("Nilai dari variabel num: %d\n", num);
    printf("Alamat variabel num: %p\n", (void*)&num);
    printf("Nilai yang ditunjuk oleh pointer address: %d\n", *address);

    return 0;
}

