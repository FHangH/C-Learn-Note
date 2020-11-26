//
// Created by FHang on 2020/11/18.
//
#include <stdio.h>

int main()
{
    int a = 5;
    int *pa;
    int **pb; // 定义一个 int * 类型的指针变量（二级指针）

    pa = &a; // a的地址赋值该指针变量 pa
    pb = &pa; // 指针变量pa的地址赋值 pb

    printf("**pb = %d", **pb); // **pb == *(*pb): (*pb)解析pb内地址指向的变量pa，*(*pb) == *pa

    return 0;
}