#include "prc.main.c"

int main() {
    int pilihan;

menu:
    system("CLS");
    printf("==============================\n");
    printf("====PROGRAM SIMULASI BANK====\n");
    printf("==============================\n");
    printf("\n");
    printf("PILIH MENU\n");
    printf("1. Sumpah\n");
    printf("2. Transfer\n");
    printf("3. Nabung\n");
    printf("4. Tarik Tunai\n");
    printf("5. Liat Saldo\n");
    printf("6. Keluar\n");
    printf("\n");

    printf("Pilihan : ");
    scanf("%d", &pilihan);

    switch (pilihan) {
    case 1:
        sumpah();
        notif();
        goto menu;
        break;
    case 2:
        transfer();
        notif();
        goto menu;
        break;
    case 3:
        nabung();
        notif();
        goto menu;
        break;
    case 4:
        tarikTunai();
        notif();
        goto menu;
        break;
    case 5:
        lihatSaldo();
        notif();
        goto menu;
        break;
    case 6:
        return 0;
        break;
    }
}

