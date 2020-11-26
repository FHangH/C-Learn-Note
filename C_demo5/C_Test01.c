//
// Created by FHang on 2020/11/24.
//
#include <stdio.h>

struct s_student
{
    char stu_name[20];
    int stu_age;
    float stu_percent;
};

int main()
{
    struct s_student stu;

    printf("Enter name:");
    gets_s(stu.stu_name, 20);
    printf("Enter age:");
    scanf_s("%d", &stu.stu_age);
    printf("Enter percent:");
    scanf_s("%f", &stu.stu_percent);

    printf("Student:\n");
    printf("\t %s\n \t %d\n \t %.2f\n", stu.stu_name, stu.stu_age, stu.stu_percent);

    return 0;
}