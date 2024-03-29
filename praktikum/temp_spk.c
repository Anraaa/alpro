#include <stdio.h>

void printClass(int start, int end) {
    printf("%d | %d\n", start, end);
}

int main() {
    printf("SPK Pembagian Kelas~\n");
    printf("------------------------\n\n");

    int numClasses = 3;
    int numData = 7;

    printf("\n");

    int currentData = 1;

    for (int i = numClasses; i >= 1; i--) {
        printf("Kelas X-%d :\n\n", i);

        int dataForThisClass = (i <= numData % numClasses) ? numData / numClasses + 1 : numData / numClasses;

        for (int j = 1; j <= dataForThisClass; j++) {
            printClass(currentData, currentData + 1);
            currentData += 2;

            if (currentData > numData) {
                break;
            }
        }

        printf("------------------------\n\n");
    }

    return 0;
}

