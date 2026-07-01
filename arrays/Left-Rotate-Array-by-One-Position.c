#include<stdio.h>

int main()
{
    // Initialize the array
    int a[5] = {10, 20, 30, 40, 50};

    int i, temp;

    // Store the first element
    temp = a[0];

    // Shift all elements one position to the left
    for(i = 1; i < 5; i++)
    {
        a[i - 1] = a[i];
    }

    // Place the first element at the last position
    a[4] = temp;

    // Display the rotated array
    printf("Array after left rotation:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
