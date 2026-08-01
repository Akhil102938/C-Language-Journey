#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
    int *a;
    int n, i;
    int fl, sl;

    printf("Enter n value: ");
    scanf("%d", &n);

    a = (int *)malloc(n * sizeof(int));

    if(a == NULL)
    {
        printf("Memory Allocation Failed!");
        return 1;
    }

    printf("Enter %d elements:\n", n);

    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    fl = INT_MIN;
    sl = INT_MIN;

    for(i = 0; i < n; i++)
    {
        if(a[i] > fl)
        {
            sl = fl;
            fl = a[i];
        }
        else if(a[i] > sl && a[i] != fl)
        {
            sl = a[i];
        }
    }

    if(sl == INT_MIN)
    {
        printf("Second distinct largest element does not exist.");
    }
    else
    {
        printf("First Largest = %d\n", fl);
        printf("Second Largest = %d\n", sl);
    }

    free(a);
    a = NULL;

    return 0;
}
