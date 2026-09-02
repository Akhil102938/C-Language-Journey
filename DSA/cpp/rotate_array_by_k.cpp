#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    int i,j=0;
    int n=a.size();
 int   b = n-k;
    reverse(a.begin(),a.end());
    reverse(a.begin(),a.end()-b);
    reverse(a.begin()+k,a.end());
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}
