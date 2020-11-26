//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    float sumNum = 0, averageNum, enterNum;
    static int a[5];

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