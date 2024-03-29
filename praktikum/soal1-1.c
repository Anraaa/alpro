#include <stdio.h>

void tampilkanMenu(Menu daftarMenu[], int jumlahMenu) {
	int i;
	for(i = 0; i < jumlahMenu; i++){
		setlocale(LC_NUMERIC, "id_ID");
		printf("%d. %s - Rp%d\n", i + 1, daftarMenu[i].nama, daftarMenu[i].harga);
	}
}
