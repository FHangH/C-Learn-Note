//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

int sum(int num)
{
    int sum = 0;
    for (int i = 0; i <= num; ++i)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    printf("%d", sum(3));
    return 0;
}
