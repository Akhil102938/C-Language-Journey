#include <stdio.h>

int maxMirrorDifference(int a[], int n)
{
    int i,diff,max=0;
    for(i=0;i<n/2;i++)
    {
       diff=a[i]-a[n-1-i];
       
       if(diff<0)
       {
           diff=-diff;
           
       }
       if(diff>max)
           {
               max=diff;
           }
    }
    printf("maximum differences =%d",max);
  return max;
}

int main()
{
    int a[6] = {10, 1, 8, 3, 15, 5};
    
    maxMirrorDifference(a,6);
    
    return 0;
}
