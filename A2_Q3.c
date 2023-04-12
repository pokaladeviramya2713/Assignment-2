#include <stdio.h>

int main() {
    int n, i, j, temp;
    float avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array in descending order: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
  
    int second_largest = arr[1];
    int second_smallest = arr[n-2];
    printf("Second largest element: %d\n", second_largest);
    printf("Second smallest element: %d\n", second_smallest);
    
    avg = (second_largest + second_smallest) / 2.0;
    printf("Average of second largest and second smallest elements: %f\n", avg);
   
    for (i = 0; i < n; i++) {
        if (arr[i] == avg) {
            printf("%f is present in the array.\n", avg);
            break;
        }
    }
    if (i == n) {
        printf("%f is not present in the array.\n", avg);
    }
    return 0;
}


