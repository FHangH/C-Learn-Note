//
// Created by FHang on 2020/11/13.
//
#include <stdio.h>

int main()
{
    int arrA[3][4] = {{1, 2,  3,  4},
                     {5, 6,  7,  8},
                     {9, 10, 11, 12}};

    static int arrB[4][3];

    printf("Before Transpose:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%4d", arrA[i][j]);
            arrB[j][i] = arrA[i][j];
        }
        printf("\n");
    }
    
    printf("Later Transpose:\n");
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%4d", arrB[i][j]);
        }
        printf("\n");
    }

    return 0;
}
