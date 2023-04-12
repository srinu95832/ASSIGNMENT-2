#include <stdio.h>

int main() {
    int arr[100], even_arr[100], odd_arr[100], n, i, even_count=0, odd_count=0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for(i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i]%2 == 0) {
            even_arr[even_count] = arr[i];
            even_count++;
        } else {
            odd_arr[odd_count] = arr[i];
            odd_count++;
        }
    }

    // Print the even elements array
    printf("The even elements of the array are: ");
    for(i=0; i<even_count; i++) {
        printf("%d ", even_arr[i]);
    }
    printf("\n");

    // Print the odd elements array
    printf("The odd elements of the array are: ");
    for(i=0; i<odd_count; i++) {
        printf("%d ", odd_arr[i]);
    }
    printf("\n");

    return 0;
}
