#include<stdio.h>

int secondLargest(int a[], int n)
{
    int i,fl,sl;
    fl=a[0];
    for(i=1;i<n;i++)
    {
        if(fl<a[i])
        {
            fl=a[i];
        }
    }
    sl=a[1];
    for(i=1;i<n;i++)
    {
        if(a[i]!=fl && sl<a[i])
        {
            sl=a[i];
        }
    }
    printf("first largest no. = %d \n",fl);
    printf("second largest no. = %d\n",sl);
    return sl;
}

int main()
{
    int a[5] = {10,25,8,99,45};

    secondLargest(a,5);

    return 0;
}
