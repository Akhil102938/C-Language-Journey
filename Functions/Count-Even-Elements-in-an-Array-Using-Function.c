#include <stdio.h>

int countEven(int arr[], int n)
{
    // Write your logic here
}

int main()
{
    int arr[] = {12, 5, 8, 7, 10, 3, 14};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = countEven(arr, n);

    printf("Number of even elements = %d", result);

    return 0;
}
