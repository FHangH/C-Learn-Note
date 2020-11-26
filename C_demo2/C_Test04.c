//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    float enterNum, sumNum = 0, averageNum;

    for (int i = 0; i < 5; ++i)
    {
        printf("Enter Num :");
        scanf_s("%f", &enterNum);
        sumNum += enterNum;
    }

    averageNum = sumNum / 5;

    printf("AverageNum is :%.2f", averageNum);

    return 0;
}