//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

#define Log printf
#define Enter scanf_s

int main()
{
    int enterNum = 0;

    Log("Enter Num :");
    Enter("%d", &enterNum);
    Log("\n");

    for (int i = 1; i <= enterNum; i++)
    {
        for (int j = 1; j <= enterNum - i; j++)
        {
            Log(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            Log("*");
        }
        Log("\n");
    }

    for (int i = enterNum - 1; i >= 1; i--)
    {
        for (int j = 1; j <= enterNum - i; j++)
        {
            Log(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            Log("*");
        }
        Log("\n");
    }

    return 0;
}
