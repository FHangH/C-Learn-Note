//
// Created by FHang on 2020/10/20.
//

#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}};
    int sum = 0;

    for (int i = 0; i < 3; ++i)
    {
        sum += a[i][i];
    }

    printf("3*3的二维数组对角线的值和：%d", sum);

    return 0;
}