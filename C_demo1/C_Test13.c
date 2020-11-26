//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    float x = 0;
    float sum = 1, term = 1;

    printf("Enter X Num : ");
    scanf_s("%f", &x);

    for (int n = 1; n <= 20 ; ++n)
    {
        term = (-term * x) / x;
        sum += term;
    }

    printf("Calculate Num is %.2f\n", sum);

    return 0;
}