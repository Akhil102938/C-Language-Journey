#include<stdio.h>

int firstNonRepeating(int a[], int n)
{
    int i, j, count;

    for(i = 0; i < n; i++)
    {
        count = 0;

        for(j = 0; j < n; j++)
        {
            if(a[i] == a[j])
            {
                count++;
            }
        }

        if(count == 1)
        {
            return a[i];
        }
    }

    return -1; // No non-repeating element found
}

int main()
{
    int a[] = {10, 20, 10, 30, 20, 40};
    int n = sizeof(a) / sizeof(a[0]);

    int result = firstNonRepeating(a, n);

    if(result != -1)
        printf("First Non-Repeating Element = %d", result);
    else
        printf("No Non-Repeating Element");

    return 0;
}
