#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE] = {1, 3, 2, 4, 7, 5, 6, 9, 8, 10};
    int i, j, temp;

    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("Sorted array in descending order: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
