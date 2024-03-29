#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int vokal[5] = {0};

    printf("Masukkan sebuah string: ");
    fgets(str, sizeof(str), stdin);

    int i;
    for (i = 0; i < strlen(str); i++) {
        char c = tolower(str[i]); 
        switch (c) {
            case 'a':
                vokal[0]++;
                break;
            case 'i':
                vokal[1]++;
                break;
            case 'u':
                vokal[2]++;
                break;
            case 'e':
                vokal[3]++;
                break;
            case 'o':
                vokal[4]++;
                break;
        }
    }

    printf("\nJumlah huruf vokal dalam string:\n");
    printf("A: %d\n", vokal[0]);
    printf("I: %d\n", vokal[1]);
    printf("U: %d\n", vokal[2]);
    printf("E: %d\n", vokal[3]);
    printf("O: %d\n", vokal[4]);

    return 0;
}

