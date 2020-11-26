//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

int main()
{
    int n = 1;
    int sum = 0;

    LOOP:
    if (sum >= 200)
    {
        goto END;
    }
    else
    {
        sum += n;
        n++;
        goto LOOP;
    }
    END:
    printf("sum=%d\n", sum);

    return 0;
}