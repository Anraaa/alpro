#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Tukar elemen jika urutan salah
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printClass(int arr[], int n, int classNumber) {
    printf("\nKelas X-%d :\n", classNumber);
    for (int i = 0; i < n; i += 2) {
        printf("%d | %d\n", arr[i], arr[i + 1]);
    }
}

int main() {
    int kelas, data;

    // Input jumlah kelas dan data
    printf("Masukkan Banyak Kelas : ");
    scanf("%d", &kelas);
    printf("Masukkan Banyak Data  : ");
    scanf("%d", &data);

    // Validasi jumlah kelas dan data
    if (kelas <= 0 || data <= 0) {
        printf("Jumlah kelas dan data harus lebih dari 0.\n");
        return 1;
    }

    // Membuat array untuk menyimpan data
    int *dataArray = (int *)malloc(data * sizeof(int) * 2);

    // Input data
    printf("\nMasukkan Data :\n");
    for (int i = 0; i < data * 2; i++) {
        scanf("%d", &dataArray[i]);
    }

    // Mengurutkan data menggunakan bubble sort
    bubbleSort(dataArray, data * 2);

    // Membagi data ke dalam kelas
    int dataIndex1 = 0;
    int dataIndex2 = data * 2 - 1;
    for (int i = 1; i <= kelas; i++) {
        int numRows = data / kelas + ((i <= data % kelas) ? 1 : 0);

        int classData[numRows * 2];
        for (int j = 0; j < numRows * 2; j += 2) {
            classData[j] = dataArray[dataIndex2--];
            classData[j + 1] = dataArray[dataIndex2--];
        }

        printClass(classData, numRows * 2, i);
    }

    // Membebaskan memori yang dialokasikan
    free(dataArray);

    return 0;
}

