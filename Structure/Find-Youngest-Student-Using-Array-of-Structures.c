#include<stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
};

int main()
{
    int i, min, index = 0;
    struct Student s[5];

    // Input details of 5 students
    for(i = 0; i < 5; i++)
    {
        printf("\nEnter Details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Age: ");
        scanf("%d", &s[i].age);
    }

    // Assume first student is the youngest
    min = s[0].age;

    // Find the youngest student
    for(i = 1; i < 5; i++)
    {
        if(s[i].age < min)
        {
            min = s[i].age;
            index = i;
        }
    }

    // Display youngest student's details
    printf("\n===== Youngest Student =====\n");
    printf("Roll No : %d\n", s[index].roll);
    printf("Name    : %s\n", s[index].name);
    printf("Age     : %d\n", s[index].age);

    return 0;
}
