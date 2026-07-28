#include <stdio.h>

struct Student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    int i;
    float max;
    struct Student s[3];   

    
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }

    
    max = s[0].marks;

    
    for(i = 1; i < 3; i++)
    {
        if(s[i].marks > max)
        {
            max = s[i].marks;
        }
    }

    printf("\nHighest Marks = %.2f\n", max);

    return 0;
}
