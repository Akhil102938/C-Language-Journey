#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a= {4,1,2,1,2};
    int ans=0,i;
    for(i=0;i<a.size();i++)
    {
        ans ^= a[i];
        
    }
    cout<<"single no."<<ans;
    
    return 0;
}
