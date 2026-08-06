#include<iostream>
#include<climits>
using namespace std;

int SecondLargest(int *x,int n)
{
    int i,fl,sl;
    
    fl=INT_MIN;
    sl=INT_MIN;
    
    for(i=1;i<n;i++)
    {
        if(x[i]>fl)
        {
            sl=fl;
            fl=x[i];
        }
       else if(x[i] !=fl && x[i]>sl)
       {
           sl=x[i];
       }
    }
    if(sl==INT_MIN)
    {
        cout<<"Second Largest no. doesn't exist ";
    }
    else
    {
    cout<<"First Largest no. in Array ="<<fl<<endl;
    cout<<"Second Largest no. in Arrays ="<<sl<<endl;
    }
    return sl;
}

int main()
{
    int a[200],n,i;
    
    cout<<"Enter Size of Array =";
    cin>>n;
    
    cout<<"Enter Array Elements=";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    
    SecondLargest(a,n);

    return 0;
}
