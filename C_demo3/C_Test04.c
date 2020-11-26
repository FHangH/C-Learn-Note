//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

int maxNum(int x, int y, int z); // 先声明函数

int main()
{
    printf("MaxNum:%d", maxNum(10, 20, 30));
    return 0;
}

int maxNum(int x, int y, int z) // 在mian()函数后面定义函数
{
    int max = 0;
    max = x > y ? x : y;
    max = max > z ? max : z;
    return max;
}