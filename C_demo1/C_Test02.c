//
// Created by FHang on 2020/10/11.
//

#include <stdio.h>

#define Log printf
#define Enter scanf_s

int main()
{
    int a = 0;  // �����ĸ���
    int num = 0;  // ���������

    Log("����һ��������");
    Enter("%d", &num);

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            a++;  // ����������1
        }
    }

    if (a == 0)
    {
        Log("%d��������\n", num);
    }
    else
    {
        Log("%d����������\n", num);
    }

    return 1;
}
