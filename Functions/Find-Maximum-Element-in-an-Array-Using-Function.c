#include<stdio.h>

int maxArray(int a[], int n)
{
    int max,i;
    
    max=a[0];
    
   for(i=1;i<n;i++)
   {
       if(max<a[i])
       {
           max=a[i];
       }
   }
   
   return max;
}

int main()
{
    int a[5] = {10,25,8,99,45};

    int result = maxArray(a, 5);
    
    printf("\nReturned Maximum = %d", result);
   
    return 0;
}
