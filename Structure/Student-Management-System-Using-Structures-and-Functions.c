#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int age;
    float marks;
    
};

void inputStudent(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nEnter the details of Student %d\n", i + 1);

        printf("Enter Roll No. of the Student: ");
        scanf("%d", &s[i].roll);

        printf("Enter Name of the Student: ");
        scanf("%s", s[i].name);
        
        printf("Enter Age of the Student: ");
        scanf("%d", &s[i].age);

        printf("Enter Marks of the Student: ");
        scanf("%f", &s[i].marks);
    }
}

void displayStudent(struct Student s[], int n)
{
    int i;

    printf("\n----- Student Details -----\n");

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Roll No : %d\n", s[i].roll);
        printf("Name    : %s\n", s[i].name);
        printf("Age     : %d\n", s[i].age);
        printf("Marks   : %.2f\n", s[i].marks);
    }
}
int highestmarks(struct Student s[],int n)
{
        int i;
        float max=s[0].marks;
        for(i=1;i<n;i++)
        {
            if(s[i].marks>max)
            {
                max=s[i].marks;
            }
        }
        printf("highest marks %.2f\n",max);
        return max;
}
float lessmarks(struct Student s[],int n)
{
    int i;
    float min=s[0].marks;
    for(i=1;i<n;i++)
    {
        if(s[i].marks<min)
        {
            min=s[i].marks;
        }
    }
    printf("less marks %.2f\n",min);
    
    return 0;
}
int youngeststudent(struct Student s[],int n)
{
    int i;
    int index=0;
    int min=s[0].age;
    for(i=0;i<n;i++)
    {
        if(s[i].age<min)
        {
            min=s[i].age;
            index=i;
        }
    }
    printf("\n===== Youngest Student =====\n");
    printf("Roll No : %d\n", s[index].roll);
    printf("Name    : %s\n", s[index].name);
    printf("Age     : %d\n", s[index].age);
    
    return 0;
}
int main()
{
    struct Student s[5];

    inputStudent(s, 5);

    displayStudent(s, 5);
    
    highestmarks(s,5);
    
    lessmarks(s,5);
    
    youngeststudent(s,5);

    return 0;
}
