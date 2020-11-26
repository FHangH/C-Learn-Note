//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

int funcSum(int n);

int main()
{
    int enterNum;
    printf("Enter Num :");
    scanf_s("%d", &enterNum);
    printf("Sum = %d", funcSum(enterNum));

    return 0;
}

int funcSum(int n)
{
    return n == 1 ? 1 : n + funcSum(n - 1);
}