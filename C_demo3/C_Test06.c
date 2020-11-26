//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

int funcSum(int num);

float funcCalculate(int m, int n, int p);

int main()
{
    int m, n, p;
    printf("enter num:");
    scanf_s("%d %d %d", &m, &n, &p);
    float num = funcCalculate(m, n, p);
    printf("Calculate Num :%7.2f", num);
    return 0;
}

int funcSum(int num)
{
    int sum;
    for (sum = 0; num > 0; --num)
    {
        sum += num;
    }
    return sum;
}

float funcCalculate(int m, int n, int p)
{
    float y = (float)(funcSum(m) * funcSum(n));
    y = y / (float)funcSum(p);
    return y;
}

