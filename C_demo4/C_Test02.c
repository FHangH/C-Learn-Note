//
// Created by FHang on 2020/11/18.
//
#include <stdio.h>

void funcSwap(int *x, int *y);

int main()
{
    int x = 2, y = 3;
    funcSwap(&x, &y); // & Ϊ���� �õ� x���ڴ��ַ
    printf("x = %d, y = %d", x, y);

    return 0;
}

void funcSwap(int *x, int *y) // �˴���д�� * Ϊ���� ��ַ������ָ�������
{
    int s = *x; //����ʱ��* Ϊ������ַ���ڴ�ֵ == x
    *x = *y;
    *y = s;
}