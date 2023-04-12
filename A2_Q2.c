#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest1 = arr[0], largest2 = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if (arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }
    printf("The largest two elements are: %d and %d\n", largest1, largest2);
    return 0;
}


