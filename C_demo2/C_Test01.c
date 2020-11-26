//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    static int a[10];
    for (int i = 0; i < 10; ++i)
    {
        printf("Enter Num to Array :");
        scanf_s("%d", &a[i]);
    }

    for (int j = 0; j < 10; ++j)
    {
        printf("%3d", a[j]);
    }

    for (int k = 9; k >= 0; --k)
    {
        printf("%3d", a[k]);
    }

    return 0;
}