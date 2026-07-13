#include<stdio.h>

void reverseArray(int a[], int n)
{
    int i,temp;
    for(i=0;i<n/2;i++)
    {
        temp = a[n-1-i];
        a[n-1-i] = a[i];
        a[i] = temp;
    }
}

int main()
{
    int a[5] = {10,20,30,40,50};
    int i;

    reverseArray(a, 5);

    printf("Reversed Array: ");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
