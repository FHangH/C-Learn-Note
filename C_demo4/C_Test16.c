//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

int main(int n, char *args[])
{
    printf("n=%d", n);

    for (int i = 1; i < n; ++i)
    {
        printf("%s\n", args[i]);
    }

    return 0;
}