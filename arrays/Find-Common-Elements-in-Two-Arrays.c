#include<stdio.h>
int main()
{
int a[5]={10,20,30,40,50};
int b[5]={20,40,60,80,10};
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<5;j++)
{
if(a[i]==b[j])
{
printf("%d\n",a[i]);
}
}
}
return 0;
}
