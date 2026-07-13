#include<stdio.h>

int isSorted(int a[], int n)
{
    if (n == 0 || n == 1)  
    {
        return 1; 
    }
    for (int i = 0; i < n - 1; i++) 
    {
        
        if (a[i] > a[i + 1])
        {
            return 0;
        }
    }

    return 1; 
}

int main()
{
    int a[5] = {10, 20, 30, 40, 50};
    int n = 5; 

    
    int result = isSorted(a, n);


    if (result == 1) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is NOT sorted in ascending order.\n");
    }

    return 0;
}
