//
// Created by FHang on 2020/11/23.
//
#include <stdio.h>

int main()
{
    int (*p)[4], arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    for (p = arr; p < arr + 3; p++)
    {
        for (int i = 0; i < 4; ++i)
        {
            printf("%3d", *(*p + i));
//            printf("%3d", *(*(arr + x) + i));
        }
        printf("\n");
    }

    return 0;
}