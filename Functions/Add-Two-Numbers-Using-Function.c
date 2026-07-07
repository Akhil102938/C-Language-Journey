#include<stdio.h>
 int great(int x,int y)
 {
     int sum;
     sum=x+y;
    printf("%d",sum);
 }
 int main()
 {
     int a,b;
     printf("enter two elements= ");
     scanf("%d  %d",&a,&b);
     great(a,b);
     return 0;
 }
