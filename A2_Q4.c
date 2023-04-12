#include <stdio.h>

int main() {
    int array[] = {10, 15, 90, 200, 110};
    int n = sizeof(array) / sizeof(array[0]);
    int max_diff = 0;
    int i, j;
    
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            int diff = array[j] - array[i];
            if (diff > max_diff) {
                max_diff = diff;
            }
        }
    }
    
    printf("Maximum difference is %d\n", max_diff);
    
    return 0;
}


