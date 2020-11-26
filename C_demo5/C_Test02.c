//
// Created by FHang on 2020/11/25.
//
#include <stdio.h>

struct s1_student
{
    char stu_name[20];
    int stu_age;
    float stu_percent;
};

int main()
{
    struct s1_student stu1 = {"fang", 22, 99}, stu2;
    stu2 = stu1;

    printf("Student01:\n");
    printf("\t %s\n \t %d\n \t %.2f\n", stu1.stu_name, stu1.stu_age, stu1.stu_percent);
    printf("Student02:\n");
    printf("\t %s\n \t %d\n \t %.2f\n", stu2.stu_name, stu2.stu_age, stu2.stu_percent);

    return 0;
}