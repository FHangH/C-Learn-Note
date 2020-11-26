//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

double funcFact(int n);

int main()
{
    int n = 0;
    double factNum;
    printf("Enter Num :");
    scanf_s("%d", &n);
    factNum = funcFact(n);
    printf("Fact = %.0lf", factNum);

    return 0;
}

double funcFact(int n)
{
    double fact;
    if (n == 1)
    {
        fact = 1;
    }
    else
    {
        fact = n * funcFact(n - 1);
    }

    return fact;
    // 三目运算来表达
    // return n == 1 ? 1 : n * funcFact(n - 1);
}
