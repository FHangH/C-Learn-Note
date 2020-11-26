//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    long sum = 0, fact = 1;

    for (int n = 1; n <= 10 ; ++n)
    {
        fact *= n;
        sum += fact;
    }
    printf("sum = %ld", sum);

    return 0;
}