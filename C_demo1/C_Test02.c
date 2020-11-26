//
// Created by FHang on 2020/10/11.
//

#include <stdio.h>

#define Log printf
#define Enter scanf_s

int main()
{
    int a = 0;  // 素数的个数
    int num = 0;  // 输入的整数

    Log("输入一个整数：");
    Enter("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            a++;  // 素数个数加1
        }
    }

    if (a == 0)
    {
        Log("%d是素数。\n", num);
    }
    else
    {
        Log("%d不是素数。\n", num);
    }

    return 1;
}
