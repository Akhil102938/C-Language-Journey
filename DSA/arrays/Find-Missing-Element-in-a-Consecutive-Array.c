#include<stdio.h>

int main()
{
    // Initialize the array with one missing element
    int a[5] = {1, 2, 4, 5, 6};

    int n, i;
    int sum = 0, missing;

    // Get the last element (largest number)
    n = a[4];

    // Calculate the sum of array elements
    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d\n", sum);

    // Calculate the missing element using the sum formula
    missing = ((n * (n + 1)) / 2) - sum;

    printf("Missing Element = %d", missing);

    return 0;
}
