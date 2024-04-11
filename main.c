#include <stdio.h>

#define LEN 4 

void add(int arr[])
{
    for (int i = 0; i <= LEN; i++) {
        arr[i]++;
    }
}

int main()
{
    int arr[LEN] = {1, 2, 3, 4};
    int arr2[LEN] = {10, 20, 30, 40};
    add(arr);
    for (int i = 0; i < LEN; i++) {
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    for (int i = 0; i < LEN; i++) {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    return 0;
}
