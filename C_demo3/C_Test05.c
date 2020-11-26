//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

#define sum(x, y) x+y; // 带参宏

int main()
{
    int num = 0;
    num = sum(10, 20); // 展开： num = sum(x+y) -> num = x + y
    printf("Sum Num :%d", num);
    return 0;
}
