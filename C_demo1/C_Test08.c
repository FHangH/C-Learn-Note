//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    int n, i;
    int sum = 0;

    for (n = 200; n < 300; ++n)
    {
        for (i = 2; i < n / 2; ++i)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i >= n / 2)
        {
            sum += n;
            printf("%4d", n);
        }
    }
    printf("\n sum = %d", sum);

    return 0;
}