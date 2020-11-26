//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    int f1 = 1, f2 = 1, f3;

    printf("1=%d\n2=%d\n", f1, f2);

    for (int k = 3; k <= 20; ++k)
    {
        f3 = f1 + f2;
        printf("%d=%d\n", k, f3);
        f1 = f2;
        f2 = f3;
    }

    return 0;
}