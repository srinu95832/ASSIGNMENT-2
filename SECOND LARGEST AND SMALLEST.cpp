#include <stdio.h>

int main() {
    int arr[100], n, i, first, second, third, fourth;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize first, second, third and fourth to first four elements of array
    first = arr[0];
    second = arr[1];
    third = arr[2];
    fourth = arr[3];

    // Traverse the array to find the first, second, third and fourth largest elements
    for(i=4; i<n; i++) {
        if(arr[i] > first) {
            fourth = third;
            third = second;
            second = first;
            first = arr[i];
        } else if(arr[i] > second) {
            fourth = third;
            third = second;
            second = arr[i];
        } else if(arr[i] > third) {
            fourth = third;
            third = arr[i];
        } else if(arr[i] > fourth) {
            fourth = arr[i];
        }
    }

    // Print the second largest and smallest elements
    printf("The second largest element is: %d\n", second);
    printf("The second smallest element is: %d\n", third);

    return 0;
}
