#include<iostream>
using namespace std;
void missingNo(int a[],int n)
{
    int i,m;
    int sum = 0;
    for(i=0;i<n;i++)
    {
      sum = sum + a[i];
    }
    int missing = ((a[n-1]*(a[n-1]+1))/2)-sum;
    cout << missing;
}
int main()
{
    int a[5]={1,2,3,5,6};

    int n = sizeof(a)/sizeof(a[0]);

    missingNo(a,n);

    return 0;
}
