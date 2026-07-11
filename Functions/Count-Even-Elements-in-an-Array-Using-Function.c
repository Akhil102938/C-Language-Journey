#include<stdio.h>

int countEven(int a[], int n)
{
    int i,count=0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            count++;
        }
    }
    
    printf("Even no. in array = %d",count);
    
    return count;
}

int main()
{
    int a[6] = {10,25,8,99,40,12};

    countEven(a,6);
    
    return 0;
}
