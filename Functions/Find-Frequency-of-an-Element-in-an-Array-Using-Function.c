#include<stdio.h>

int frequency(int a[], int n, int key)
{
    int i,j;
    int count=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(key==a[i])
            {
                if(a[i]==a[j])
                {
                count++;
                }
            }
        }
    }
    printf("Frequency of element= %d",count);
    return 0;
}

int main()
{
    int a[7] = {10,20,30,20,40,20,50};
    int key;

    printf("Enter element: ");
    scanf("%d", &key);

    frequency(a,7,key);

    return 0;
}
