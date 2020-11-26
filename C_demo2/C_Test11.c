//
// Created by FHang on 2020/11/13.
//
#include <stdio.h>

int main()
{
    char s2[50];

    char s1[50] = "abcdefghjklmn";

    for (int i = 0; (s2[i] = s1[i]); ++i);

    puts(s2);

    return 0;
}
