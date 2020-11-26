//
// Created by FHang on 2020/11/25.
//
#include <stdio.h>

struct s3_student
{
    char stu_name[20];
    int stu_age;
    char sex;
    float stu_grade;
};

int main()
{
    struct s3_student stu[3] = {
            {"fang01", 22, 'T', 97},
            {"fang02", 23, 'F', 98},
            {"fang03", 24, 'T', 99}
    };
    struct s3_student *p_stu;

    printf("%6s %5s %5s %7s\n", "Name", "Age", "Sex", "Grade");
    printf("----------------------------\n");

    for (p_stu = stu; p_stu < stu + 3; p_stu++)
    {
        printf("%7s %4d %4c %8.2f\n", p_stu->stu_name, p_stu->stu_age, p_stu->sex, p_stu->stu_grade);
    }

    return 0;
}