#include<stdio.h>

int countobb(int a[], int n)
{
int i,count=0;

for(i=0;i<n;i++)  
{  
    if(a[i]%2 !=0)  
    {  
        count++;  
    }  
}  
  
printf("Odd no. in array = %d",count);  
  
return count;

}

int main()
{
int a[6] = {10,25,8,99,40,12};

countobb(a,6);  
  
return 0;

}
