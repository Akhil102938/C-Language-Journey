#include<stdio.h>
int square(int n)
{
    int squ;
    squ = n*n;
    printf("sqares of n =%d",squ);
    return squ;
}
int main()
{
    int a;
    printf("Enter the value of a :- ");
    scanf("%d",&a);
    square(a);
    return 0;
}
