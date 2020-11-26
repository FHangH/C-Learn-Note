//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

int funcSum(int n);

int main()
{
    int n;
    int sum;

    printf("Enter Num :");
    scanf_s("%d", &n);
    sum = funcSum(n);
    printf("Sum = %d", sum);

    return 0;
}

int funcSum(int n)
{
    return n < 10 ? n : (n % 10) + funcSum(n / 10);
}
