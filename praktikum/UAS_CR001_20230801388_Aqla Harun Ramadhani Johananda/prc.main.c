#include "lib.main.h"

void notif() {
    fflush(stdin);
    printf("\n\nKlik Enter Untuk Lanjut");
    getchar();
}

void sumpah() {
	system("CLS");
    printf("dengan nama Allah, saya Aqla Harun Ramadhani Johananda bersumpah bahwa saya\n");
    printf("tidak melakukan kecurangan (mencontek ataupun memberikan contekan) selama UAS Algoritma\n");
    printf("dan Pemrograman ini berlangsung, jika pengawas menemukan saya melakukan kecurangan maka\n");
    printf("saya siap mendapatkan nilai 0 pada UAS, dan apabila kecurangan saya tidak diketahui oleh\n");
    printf("pengawas maka saya siap mendapatkan azab dari Allah baik di dunia maupun di akhirat kelak.\n");
}

void transfer() {
    int jumlah;
    int rek;
    char konfirmasi;
	
	system("CLS");
    printf("Saldo Anda Saat Ini : %d\n", saldo);

    printf("\nApa Anda Ingin Lanjut Transfer? Pastikan Saldo Anda Mencukupi (Y/N): ");
    fflush(stdin);
    scanf(" %c", &konfirmasi);

    if (konfirmasi == 'Y' || konfirmasi == 'y') {
    	system("CLS");
        printf("\nMasukkan No Rekening: ");
        scanf("%d", &rek);

        printf("Masukkan Nominal Yang Akan Di Transfer: ");
        scanf("%d", &jumlah);

        if (jumlah > saldo) {
            printf("\nSaldo tidak mencukupi");
            notif();
        } else {
            saldo -= jumlah;
            printf("\nTransfer berhasil ke No Rekening : %d\nSaldo sekarang: %d", rek, saldo);
            notif();
            transfer(); // Memanggil fungsi rekursif
        }
    } else {
        return;
    }
}

void nabung() {
    int jumlah;

    system("CLS");
    printf("Masukkan jumlah yang ingin ditabungkan: ");
    scanf("%d", &jumlah);

    saldo += jumlah;
    printf("Tabungan berhasil. Saldo sekarang: %d\n", saldo);
}

void tarikTunai() {
    int jumlah;
    char konfirmasi;

    system("CLS");
    printf("Saldo Anda Saat Ini : %d\n", saldo);

    printf("\nApa Anda Ingin Tarik Tunai? Pastikan Saldo Anda Mencukupi (Y/N): ");
    fflush(stdin);
    scanf(" %c", &konfirmasi);

    if (konfirmasi == 'Y' || konfirmasi == 'y') {
        system("CLS");
        printf("Masukkan jumlah penarikan tunai (kelipatan 50000): ");
        scanf("%d", &jumlah);

        if (jumlah % 50000 != 0) {
            printf("Penarikan tunai harus dalam kelipatan 100000. Silakan coba lagi.\n");
            notif();
            tarikTunai(); // Memanggil fungsi rekursif
        } else if (jumlah > saldo) {
            printf("Saldo tidak mencukupi. Tidak dapat melakukan penarikan tunai.\n");
        } else {
            saldo -= jumlah;
            printf("Penarikan tunai berhasil. Saldo sekarang: %d\n", saldo);

            printf("Apakah Anda ingin melanjutkan transaksi? (Y/N): ");
            fflush(stdin);
            scanf(" %c", &konfirmasi);

            if (konfirmasi == 'Y' || konfirmasi == 'y') {
                tarikTunai(); // Memanggil fungsi Rekursif
            }
        }
    }
}

void lihatSaldo() {
    system("CLS");
    printf("Saldo Anda saat ini: %d\n", saldo);
}
