#include<stdio.h>

int main()
{
    // Initialize the array
    int a[8] = {10, 0, 20, 0, 30, 40, 0, 50};

    int i, j = 0;

    // Move all non-zero elements to the beginning
    for(i = 0; i < 8; i++)
    {
        if(a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill the remaining positions with zeros
    for(i = j; i < 8; i++)
    {
        a[i] = 0;
    }

    // Display the updated array
    printf("Array after moving zeros to the end:\n");

    for(i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
