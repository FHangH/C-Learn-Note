//
// Created by FHang on 2020/11/13.
//
#include <stdio.h>

int main()
{
    int sum = 0;
    int arr[10] = {11, 22, 33, 44, 55, 66, 77, 88, 99, 100};

    for (int i = 0; i < 10; ++i)
    {
        printf("%4d", arr[i]);
    }

    for (int i = 0, j = 9; i < j; ++i, --j)
    {
        sum = arr[i];
        arr[i] = arr[j];
        arr[j] = sum;
    }

    printf("\n");

    for (int k = 0; k < 10; ++k)
    {
        printf("%4d", arr[k]);
    }

    return 0;
}
