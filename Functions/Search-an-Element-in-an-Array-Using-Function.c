#include<stdio.h>

int searchElement(int a[], int n, int key)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            printf("a[%d] = %d",i,a[i]);
            break;
        }
    }
    if(i==n)
    {
        printf("key is not exist ");
    }
    return i;
}

int main()
{
    int a[5] = {10,20,30,40,50};
    int key;

    printf("Enter element to search: ");
    scanf("%d", &key);

    searchElement(a,5,key);

    return 0;
}
