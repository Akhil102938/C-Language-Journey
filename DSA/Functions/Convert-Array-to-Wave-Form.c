#include <stdio.h>

void waveArray(int a[], int n)
{
    int i, temp;

    for(i = 0; i < n - 1; i += 2)
    {
        if(a[i] < a[i + 1])
        {
            temp = a[i];
            a[i] = a[i + 1];
            a[i + 1] = temp;
        }

        if(i + 2 < n && a[i + 1] > a[i + 2])
        {
            temp = a[i + 1];
            a[i + 1] = a[i + 2];
            a[i + 2] = temp;
        }
    }
}

int main()
{
    int n, i;

    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    waveArray(a, n);

    printf("Wave Array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
