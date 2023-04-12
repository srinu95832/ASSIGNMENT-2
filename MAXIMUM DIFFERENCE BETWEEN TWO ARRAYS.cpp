#include <stdio.h>
#include <stdlib.h>

int main() {
    int arr[100], n, i, max_diff = 0, min_val;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the minimum value in the array
    min_val = arr[0];
    for(i=1; i<n; i++) {
        if(arr[i] < min_val) {
            min_val = arr[i];
        }
    }

    // Find the maximum difference between two elements in the array
    for(i=0; i<n; i++) {
        if(arr[i] - min_val > max_diff) {
            max_diff = arr[i] - min_val;
        }
    }

    // Print the maximum difference
    printf("The maximum difference between two elements in the array is: %d\n", max_diff);

    return 0;
}
