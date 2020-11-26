//
// Created by FHang on 2020/11/20.
//
#include <stdio.h>

float funcCalculateAverage(const int *p_arr, int eleCount);

int main()
{
    int arr[6] = {10, 20, 30, 40, 50, 11};
    int eleCount;
    eleCount = sizeof(arr) / sizeof(arr[0]);

    printf("arr[%d] average = %.2f", eleCount, funcCalculateAverage(arr, eleCount));

    return 0;
}

float funcCalculateAverage(const int *p_arr, int eleCount)
{
    int sum = 0;
    float average;
    for (int i = 0; i < eleCount; ++i)
    {
        sum += p_arr[i];
    }
    average = (float)sum / (float)eleCount;

    return average;
}