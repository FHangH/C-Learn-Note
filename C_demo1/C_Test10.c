//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    int sum = 1;

    for (int i = 9; i >= 1; i--)
    {
        sum = (sum + 1) * 2;
        if (i == 1)
        {
            printf("1 day has %d", sum);
            break;
        }
    }

    return 0;
}