//
// Created by FHang on 2020/11/14.
//
#include <stdio.h>

float averageNum(float num)
{
    float sum = 0.0f, average;
    int count;
    for (int i = 0; i <= (int)num ; ++i)
    {
        sum += (float)i;
        count = i;
    }
    average = sum / (float)count;

    return average;
}

int main()
{
    int enterNum;
    printf("enter num:");
    scanf_s("%d", &enterNum);
    printf("averageNum=%7.2f", averageNum((float)enterNum));
    return 0;
}
