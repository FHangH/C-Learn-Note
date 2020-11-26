//
// Created by FHang on 2020/11/21.
//
#include <stdio.h>

int main()
{
    int *p;
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};

//    for (p = arr[0]; p < arr[0] + 12; p++)
//    {
//        if ((p - arr[0]) % 4 == 0)
//        {
//            printf("\n");
//        }
//        printf("%3d", *p);
//    }

    for (p = *(arr + 0); p < *(arr + 0) + 12; p++)
    {
        if ((p - *(arr + 0)) % 4 == 0)
        {
            printf("\n");
        }
        printf("%3d", *p);
    }

    return 0;
}