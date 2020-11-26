//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

int *funcJudgeMaxNum(int *p_num1, int *p_num2);

int main()
{
    int num1, num2, *maxNum;

    printf("Enter num1 and num2 :");
    scanf_s("%d %d", &num1, &num2);

    maxNum = funcJudgeMaxNum(&num1, &num2);
    printf("MaxNum = %d", *maxNum);

    return 0;
}

int *funcJudgeMaxNum(int *p_num1, int *p_num2)
{
    return *p_num1 > *p_num2 ? p_num1 : p_num2;
}