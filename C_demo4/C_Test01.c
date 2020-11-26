//
// Created by FHang on 2020/11/18.
//
#include <stdio.h>

int main()
{
    int a = 5, b = 10, *pa = NULL, *pb = NULL;
    pa = &a;
    pb = &b;
    printf("*pa = %d, *pb = %d", *pa, *pb);

    *pb = *pa + *pb;
    printf("\n*pb = %d", *pb);

    return 0;
}
