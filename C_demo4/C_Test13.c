//
// Created by FHang on 2020/11/23.
//
#include <stdio.h>

void funcCopyStr(char *originStr, char *flagStr);

int main()
{
    char str_Origin[100], str_Flag[100];

    printf("Enter String To Copy :");
    gets_s(str_Origin, 100);

    funcCopyStr(str_Origin, str_Flag);
    printf("%s\n", str_Origin);
    printf("%s\n", str_Flag);

    return 0;
}

void funcCopyStr(char *originStr, char *flagStr)
{
    for (; (*flagStr = *originStr); originStr++, flagStr++);
}