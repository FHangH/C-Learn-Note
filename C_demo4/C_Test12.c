//
// Created by FHang on 2020/11/23.
//
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20], *str_Front, *str_Rear;

    printf("Enter String :");
    gets_s(str, 20);
    str_Rear = str + strlen(str) - 1;

    for (str_Front = str; str_Front < str_Rear; str_Front++, str_Rear--)
    {
        if (*str_Front != *str_Rear)
        {
            break;
        }
    }

    printf("%d %d", *str_Front, *str_Rear);

    if (*str_Front > *str_Rear)
    {
        printf(" F");
    }
    else
    {
        printf(" T");
    }

    return 0;
}