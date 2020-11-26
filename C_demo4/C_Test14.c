//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

int main()
{
    int *p_Arr[5];
    int tag_Arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; ++i)
    {
        p_Arr[i] = tag_Arr + i;
    }

    for (int j = 0; j < 5; ++j)
    {
        printf("%3d", *p_Arr[j]);
    }
    printf("\n");

    return 0;
}