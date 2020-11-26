//
// Created by FHang on 2020/10/18.
//

#include <stdio.h>

int main()
{
    int maxNum = 0;
    static int a[10];

    for (int i = 0; i < 10; ++i)
    {
        printf("Enter Num :");
        scanf_s("%d", &a[i]);
    }

    for (int j = 0; j < 10; ++j)
    {
        if (a[j] > maxNum)
        {
            maxNum = a[j];
            printf("\n");
        }
    }
    printf("MaxNum is :%d", maxNum);

    return 0;
}