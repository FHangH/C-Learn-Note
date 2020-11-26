//
// Created by FHang on 2020/11/18.
//
#include <stdio.h>

void funcSwap(int *x, int *y);

int main()
{
    int x = 2, y = 3;
    funcSwap(&x, &y); // & 为引用 得到 x的内存地址
    printf("x = %d, y = %d", x, y);

    return 0;
}

void funcSwap(int *x, int *y) // 此处是写如 * 为定义 地址变量（指针变量）
{
    int s = *x; //访问时，* 为解析地址的内存值 == x
    *x = *y;
    *y = s;
}