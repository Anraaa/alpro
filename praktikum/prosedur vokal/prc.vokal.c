#include "lib.vokal.h"
#include "string.h"

void vokal(int sm){
	char str[100];
    int vokal = 0;

    printf("Masukkan sebuah kata: ");
    fgets(str, sizeof(str), stdin);
    
	int i;
    for (i = 0; i < strlen(str); i++) { 
        char c = tolower(str[i]); 
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            vokal++;
        }
    }

    printf("Jumlah huruf vokal dalam sebuah kata: %d\n", vokal);
}
