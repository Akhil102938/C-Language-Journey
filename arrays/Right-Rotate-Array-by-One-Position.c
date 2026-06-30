#include<stdio.h>
int main()
{
    int a[5]={10,20,30,40,50};
    int i,temp;
    temp=a[4];
    printf("%d",temp);
    for(i=4;i>0;i--)
    {
        a[i]=a[i-1];
    }
    for(i=1;i<5;i++)
    {
    printf(" %d",a[i]);
    }
    return 0;
}
