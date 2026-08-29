#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a = {1, 1, 2, 2, 2, 3, 4, 4, 5};
    int i;
    a.erase(unique(a.begin(), a.end()), a.end());
    for(i=0;i<a.size();i++)
    {
        cout<<" "<<a[i];
    }
    return 0;
}    
