//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

float func_AddNum(float num1, float num2);
float func_SubNum(float num1, float num2);
float func_MulNum(float num1, float num2);
float func_DivNum(float num1, float num2);

int main()
{
    int num1, num2;
    char op;
    float (*p_Calculate)(float, float);

    printf("Enter num1 num2:");
    scanf_s("%d %c %d", &num1, &op, 1, &num2);

    switch (op)
    {
        case '+': p_Calculate = func_AddNum;
            break;
        case '-': p_Calculate = func_SubNum;
            break;
        case '*': p_Calculate = func_MulNum;
            break;
        case '/': p_Calculate = func_DivNum;
            break;
    }
    printf("CalculateResult Num = %.2f", (*p_Calculate)(num1, num2));
    getchar();

    return 0;
}

float func_AddNum(float num1, float num2)
{
    return num1 + num2;
}

float func_SubNum(float num1, float num2)
{
    return num1 - num2;
}

float func_MulNum(float num1, float num2)
{
    return num1 * num2;
}

float func_DivNum(float num1, float num2)
{
    return num1 / num2;
}