//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

int main()
{
    for (int h = 1; h <= 9; h++) //����
    {
        for (int v = 1; v <= h; v++) //������������������
        {
            printf("%d * %d = %d   ", v, h, v*h);//���Ϊ ����*����=
        }
        printf("\n");
    }

    return 0;
}