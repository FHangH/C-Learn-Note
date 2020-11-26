//
// Created by FHang on 2020/11/25.
//
#include <stdio.h>

struct s2_student
{
    char stu_name[20];
    int stu_age;
    char sex;
    float stu_percent;
};

int main()
{
    struct s2_student stu1 = {"fang", 22, 'T', 99}, *p_stu2;
    p_stu2 = &stu1;

    printf("Student01:\n");
    printf("\t %s\n, \t %d\n, \t %s\n, \t %.2f\n",
            stu1.stu_name, stu1.stu_age, (stu1.sex == 'T') ? "man" : "women", stu1.stu_percent);

    printf("Student02:\n");
    printf("\t %s\n, \t %d\n, \t %s\n, \t %.2f\n",
            p_stu2->stu_name, p_stu2->stu_age, (p_stu2->sex == 'T') ? "man" : "women", p_stu2->stu_percent);

    return 0;
}