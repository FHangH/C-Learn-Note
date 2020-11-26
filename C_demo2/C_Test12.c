//
// Created by FHang on 2020/11/13.
//
#include <stdio.h>

int main()
{
    int arr[10][10];
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (j==0||i==j)
            {
                arr[i][j] = 1;
            }
            else
            {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("%5d", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
