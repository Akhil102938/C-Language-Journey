#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> a={0,1,0,3,12};
    int i,j;
    j=0;
    for(i=0;i<a.size();i++)
    {
        if(a[i]!=0)
        {
          swap(a[i],a[j]);
           j++;
        }
    }
    for(i=0;i<a.size();i++)
    {
     cout<<" "<<a[i];
   }
     return 0;
} 
