//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

void write(int num) //无返回值，有参数的函数
{
    for (int i = 0; i <= num; ++i)
    {
        printf("%c", '*');
    }
    printf("\n");
}

int main()
{
    write(12);
    return 0;
}
