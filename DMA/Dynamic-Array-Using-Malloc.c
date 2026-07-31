#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *a;
    int n,i;
    
    printf("Enter n value :");
    scanf("%d",&n);
    
    a=(int *)malloc(n * sizeof(int));
    
    if(a == NULL)
{
    printf("Memory allocation failed!");
    return 1;
}
    
    printf("Enter n elements :");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("elements of array : %d\n",a[i]);
    }
    
    free(a);
    
    return 0;
}
