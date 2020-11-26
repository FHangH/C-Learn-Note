//
// Created by FHang on 2020/10/20.
//

#include <stdio.h>

int main()
{
    static int a[3][4];
    int max = a[0][0];
    int row = 0, column = 0;

    printf("Enter 12 Num To Array\n");

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            printf("%d Row %d Column :", i, j);
            scanf_s("%d", &a[i][j]);
        }
    }

    printf("Log Array\n");

    for (int k = 0; k < 3; ++k)
    {
        for (int g = 0; g < 4; ++g)
        {
            if (max < a[k][g])
            {
                max = a[k][g];
                row = k;
                column = g;
            }
            printf("%3d", a[k][g]);
        }
        printf("\n");
    }

    printf("Max num : %d;\t Row : %d;\t Column : %d\t", max, row, column);

    return 0;
}