#include <stdio.h>

int main() {
    int n, i, first_max, second_max;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // find the largest element in the array
    first_max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > first_max) {
            first_max = arr[i];
        }
    }
    // find the second largest element in the array
    second_max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > second_max && arr[i] < first_max) {
            second_max = arr[i];
        }
    }
    printf("The largest two elements in the array are: %d and %d", first_max, second_max);
    return 0;
}
