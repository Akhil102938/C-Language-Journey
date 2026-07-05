#include <stdio.h>

int secondLargest(int a[], int n)
{
    int i;
    int largest, second;

    largest = second = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] > largest)
        {
            second = largest;
            largest = a[i];
        }
        else if(a[i] > second && a[i] != largest)
        {
            second = a[i];
        }
    }

    return second;
}

int main()
{
    int a[5] = {10, 45, 20, 80, 60};

    printf("Second Largest = %d", secondLargest(a, 5));

    return 0;
}
