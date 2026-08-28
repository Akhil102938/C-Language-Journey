#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a = {1, 3, 20, 4, 1, 0};
    int i;
    int peak;
    int n= a.size() - 1;
    
    for(i=1;i<n;i++)
    {
        if(a[i] > a[i+1] && a[i-1] < a[i] )
        {
             peak = a[i];
        }
    }
    cout<<"Peak element :"<<peak;
    
    return 0;
}
