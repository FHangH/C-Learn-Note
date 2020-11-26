//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>
#include <malloc.h>

int main()
{
    int numCount, *p_TestArr;

    printf("Enter num count=");
    scanf_s("%d", &numCount);

    p_TestArr = (int *)malloc(numCount * sizeof(int));

    for (int i = 0; i < numCount; ++i)
    {
        printf("TestArr[%d]=", i);
        scanf_s("%d", &p_TestArr[i]);
    }

    printf("This Arr=");
    for (int j = 0; j < numCount; ++j)
    {
        printf("%4d", p_TestArr[j]);
    }

    return 0;
}