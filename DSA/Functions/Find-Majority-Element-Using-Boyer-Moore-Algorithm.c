#include<stdio.h>

int majorityElement(int a[], int n)
{
    int candidate = a[0];
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = a[i];
            count = 1;
        } else if (a[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    return candidate;
}

int main()
{
    int a[] = {2,2,1,2,3,2,2};
    int n = sizeof(a)/sizeof(a[0]);

    int result = majorityElement(a, n);

    printf("%d", result);

    return 0;
}
