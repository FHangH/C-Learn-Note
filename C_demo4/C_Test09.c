//
// Created by FHang on 2020/11/23.
//
#include <stdio.h>

int main()
{
    int (*p)[4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    p = arr;

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%3d", p[i][j]);
//            printf("%3d", *(*(p + i) + j));
//            printf("%3d", *(*(arr + i) + j));
        }
        printf("\n");
    }

    return 0;
}