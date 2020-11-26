//
// Created by FHang on 2020/10/20.
//

#include <stdio.h>

int main()
{
    static int a[2][3];

    printf("Enter 6 Num:\n");

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d Row %d Column:", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }

    printf("Log Array :\n");

    for (int k = 0; k < 2; ++k)
    {
        for (int g = 0; g < 3; ++g)
        {
            printf("%3d", a[k][g]);
        }
        printf("\n");
    }

    return 0;
}