#include <stdio.h>

#define SIZE 10

int main() {
    int arr[SIZE] = {1, 3, 2, 4, 1, 3, 5, 6, 2, 1};
    int freq[SIZE] = {0};
    int i, j;

    for (i = 0; i < SIZE; i++) {
        freq[i] = -1; // Marking element as counted
        for (j = i + 1; j < SIZE; j++) {
            if (arr[i] == arr[j]) {
                freq[i]++;
            }
        }
    }

    // Printing the frequency of each element
    printf("Element\tFrequency\n");
    for (i = 0; i < SIZE; i++) {
        if (freq[i] != -1) {
            printf("%d\t%d\n", arr[i], freq[i]+1);
        }
    }

    return 0;
}
