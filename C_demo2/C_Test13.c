//
// Created by FHang on 2020/11/13.
//
#include <stdio.h>

int main()
{
    int x, y = 0, z;

    printf("Enter:");
    scanf_s("%d", &z);
    x = z;

    while (x != 0)
    {
        y = (10*y) + (x%10);
        x = x/10;
//        printf("x=%d\n", x);
//        printf("y=%d\n", y);
    }

    if (z == y)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}
