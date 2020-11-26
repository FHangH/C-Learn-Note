//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

int main()
{
    char *p_StrArr[2] = {"Hello", "World"};

    for (int i = 0; i < 2; ++i)
    {
        printf("%s\n", p_StrArr[i]);
    }

    return 0;
}