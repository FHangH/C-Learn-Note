//
// Created by FHang on 2020/11/20.
//
#include <stdio.h>

void funcAdd(int *p_arr, int eleCount, int addNum);

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int eleCount;

    eleCount = sizeof(arr) / sizeof(arr[0]);

    funcAdd(arr, eleCount, 10);

    for (int i = 0; i < eleCount; ++i)
    {
        printf("%3d", arr[i]);
    }

    return 0;
}

void funcAdd(int *p_arr, int eleCount, int addNum)
{
    for (int i = 0; i < eleCount; ++i)
    {
        p_arr[i] += addNum;
    }
}