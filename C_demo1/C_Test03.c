//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;

    NEXT:
    sum = sum + n;
    n++;

    if (sum <= 200)
    {
        goto NEXT;
    }
    printf("sum=%d\n", sum);
}