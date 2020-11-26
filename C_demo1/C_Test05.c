//
// Created by FHang on 2020/10/16.
//

#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        //如果i 为偶数，则跳过当前循环，执行下一次遍历
        if (i % 2 == 0)
        {
            continue;
        }
        printf("i=%d\n", i);
    }

    return 0;
}