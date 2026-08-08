#include<iostream>

using namespace std;

void leader(int *a,int n)
{
    int i,le[200],k=0;
    int Rm;
    
    Rm=a[n-1];
    
    le[k] = Rm;
     k++;
     
    for(i=n-2;i>=0;i--)
    {
        if(a[i]>Rm)
        {
            Rm=a[i];
            le[k]=a[i];
            k++;
        }
    }
    cout<<"leader of Array : ";
        for(i=k-1;i>=0;i--)
        {
            cout<<le[i]<<" ";
        }
}
int main()
{
    int a[6]={16,17,4,3,5,2};
    
    leader(a,6);
    
    return 0;
}
