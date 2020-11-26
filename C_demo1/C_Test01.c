//
// Created by FHang on 2020/10/11.
//

#include <stdio.h>

#define Debug printf
#define Enter scanf_s

int main()
{
    int enterNum, sumNum;
    int b, s, g;

    Debug("Enter Num : ");
    Enter("%d", &enterNum);

    b = enterNum / 100;
    s = enterNum / 10 % 10;
    g = enterNum % 10;
    sumNum = b + s + g;

    Debug("Sum=%d", sumNum);
}
