#include <stdio.h>

int peakMirrorSum(int a[], int n)
{
    int i;
    int sum;
    int maxSum;
    int index;

    maxSum = a[0] + a[n - 1];
    index = 0;

    for(i = 0; i < n / 2; i++)
    {
        sum = a[i] + a[n - 1 - i];

        if(sum > maxSum)
        {
            maxSum = sum;
            index = i;
        }
    }

    printf("Maximum Mirror Sum = %d\n", maxSum);

    return index;
}

int main()
{
    int a[] = {4, 8, 2, 9, 6, 5};

    int n = sizeof(a) / sizeof(a[0]);

    int result = peakMirrorSum(a, n);

    printf("Index = %d\n", result);

    return 0;
}
