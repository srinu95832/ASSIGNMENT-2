#include <stdio.h>

int main() {
    int arr[100], n, i, j, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Remove duplicate elements in the array
    for(i=0; i<n; i++) {
        for(j=i+1; j<n;) {
            if(arr[j] == arr[i]) {
                for(k=j; k<n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }

    // Print the array without duplicate elements
    printf("The array without duplicate elements is: ");
    for(i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
