//
// Created by FHang on 2020/11/26.
//
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp_fh;
    errno_t err_fh;
    char str_fh;

    err_fh = fopen_s(&fp_fh,"C:\\Users\\FHang\\Desktop\\fh.txt", "w");

    if (err_fh != 0)
    {
        printf("Can not find this file\n");
        exit(0);
    }

    printf("Please input a string. Press enter key to end\n");

    while ((str_fh = getchar()) != '\n')
    {
        fputc(str_fh, fp_fh);
    }

    fclose(fp_fh);
    printf("Create file fh.txt success.");

    return 0;
}