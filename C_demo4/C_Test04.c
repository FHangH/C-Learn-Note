//
// Created by FHang on 2020/11/18.
//
#include <stdio.h>

int main()
{
    int arr[10], *p = NULL;
    p = arr;
    int x = 0;

    while (p < arr+10)
    {
        printf("arr[%d]=", x);
        scanf_s("%d", p);
        p++;
        x++;
    }

    for (p = arr + 9; p >= arr ; --p)
    {
        printf("%3d", *p);
    }

    return 0;
}