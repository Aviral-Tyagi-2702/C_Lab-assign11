/*Write a C program using the register storage class to calculate the sum of the elements of an array.*/

#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    register int sum = 0;

    for (register int i = 0; i < size; i++) {
        sum += arr[i];
    }

    printf("Sum of array elements: %d\n", sum);
    return 0;
}