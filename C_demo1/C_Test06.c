//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

int main()
{
    for (int h = 1; h <= 9; h++) //行数
    {
        for (int v = 1; v <= h; v++) //列数，但不超过行数
        {
            printf("%d * %d = %d   ", v, h, v*h);//结果为 列数*行数=
        }
        printf("\n");
    }

    return 0;
}