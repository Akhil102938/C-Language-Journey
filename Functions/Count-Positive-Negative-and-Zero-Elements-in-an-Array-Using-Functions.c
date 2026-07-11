#include<stdio.h>

int countPositive(int a[], int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            count++;
        }
    }
    printf("positive no. = %d \n",count);
    return count;
}

int countNegative(int a[], int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
   {
    if(a[i]<0)
    {
        count++;
    }
   }
    printf("Nagative no. = %d \n",count);
    return count;
}

int countZero(int a[], int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            count++;
        }
    }
    printf("No. Zeros = %d \n",count);
    return count;
}

int main()
{
    int a[7] = {10,-5,0,8,-2,0,15};

   countPositive(a,7);
   
   countNegative(a,7);
    
    countZero(a,7);

    return 0;
}
