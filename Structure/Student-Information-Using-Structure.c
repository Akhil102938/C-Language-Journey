#include<stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1;

    printf("Enter roll no. = ");
    scanf("%d", &s1.rollno);

    printf("Enter name of student = ");
    scanf("%s", s1.name);

    printf("Enter marks = ");
    scanf("%f", &s1.marks);

    printf("\nRoll No = %d\n", s1.rollno);
    printf("Name = %s\n", s1.name);
    printf("Marks = %.1f\n", s1.marks);

    return 0;
}
