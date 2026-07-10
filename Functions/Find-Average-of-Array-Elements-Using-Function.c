#include<stdio.h>

float averageArray(int a[], int n)
{
    int i, sum = 0;
    float avg;

    for(i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    avg = (float)sum / n;

    printf("Average of Arrays = %.2f", avg);

    return avg;
}

int main()
{
    int a[5] = {10,20,30,40,50};

    averageArray(a,5);

    return 0;
}
