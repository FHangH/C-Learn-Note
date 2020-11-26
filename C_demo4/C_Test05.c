//
// Created by FHang on 2020/11/20.
//
#include <stdio.h>

int main()
{
    int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *p = arr + 2;
    for (int i = 0; i < 5; ++i)
    {
        printf("%5d", p[i]);
    }

    return 0;
}