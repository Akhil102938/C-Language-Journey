#include<stdio.h>

// Function to calculate the factorial of a number
int factorial(int n)
{
    int i;
    int fact = 1;

    // Multiply numbers from n to 1
    for(i = n; i > 0; i--)
    {
        fact = fact * i;
    }

    // Display the factorial
    printf("Factorial of %d = %d\n", n, fact);

    // Return the factorial value
    return fact;
}

int main()
{
    int a, b;

    // Read the first number
    printf("Enter the value of a: ");
    scanf("%d", &a);

    // Call the factorial function
    factorial(a);

    // Read the second number
    printf("Enter the value of b: ");
    scanf("%d", &b);

    // Call the factorial function
    factorial(b);

    return 0;
}
