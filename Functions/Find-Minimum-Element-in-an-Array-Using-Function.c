#include<stdio.h>

int minArray(int a[], int n)
{
    int i,min;
    
    min=a[0];
    
    for(i=0;i<n;i++)
    {
        if(a[i]<min)
        {
          min=a[i];
        }
    }
    
printf("Smallest Number in array = %d",min);

   return min;
}

int main()
{
    int a[5] = {10,25,8,99,45};

   minArray(a,5);
    
    return 0;
}
