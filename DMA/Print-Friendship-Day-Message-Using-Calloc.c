#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a;
    int n, i;

    printf("Enter n value: ");
    scanf("%d", &n);

    a = (int *)calloc(n, sizeof(int));

    if (a == NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("%d) Happy Friendship Day\n",i+1);
    }

    free(a);
    a = NULL;

    return 0;
}
