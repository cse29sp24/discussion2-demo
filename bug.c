/* Discussion 2 Demo - Memory Errors */

#include <stdio.h>

#define LEN 4 

/**
 * Increment all the numbers in an array by 1.
 */
void increment(int arr[], int length)
{
    for (int i = 0; i <= length; i++) {
        arr[i]++;
    }
}

int main()
{
    int arr[LEN] = {1, 2, 3, 4};
    int arr2[LEN] = {10, 20, 30, 40};

    increment(arr, LEN);
    increment(arr2, LEN);

    for (int i = 0; i < LEN; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    for (int i = 0; i < LEN; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    return 0;
}
