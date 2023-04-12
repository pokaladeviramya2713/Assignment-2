#include <stdio.h>

int main() {
   int arr[5] = {12, 56, 34, 78, 100};
   int max = arr[0]; // initialize max with the first element

   for (int i = 1; i < 5; i++) {
      if (arr[i] > max) {
         max = arr[i];
      }
   }

   printf("The largest element in the array is %d\n", max);

   return 0;
}

