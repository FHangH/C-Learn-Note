//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    int sum, bw, sw, gw;

    for (int i = 100; i <= 999; ++i)
    {
        bw = i / 100;
        sw = i / 10 % 10;
        gw = i % 10;
        sum = bw * bw * bw + sw * sw * sw + gw * gw * gw;

        if (sum == i)
        {
            printf("%d\t", sum);
        }
    }

    return 0;
}