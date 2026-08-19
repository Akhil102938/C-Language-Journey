#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={-2,1,-3,4,-1,2,1,-5,4};
    int i;
    int currentsum=0,maxsum=a[0];
    for(i=0;i<a.size();i++)
    {
       currentsum = currentsum + a[i];

       if( currentsum>maxsum)
       {
        maxsum=currentsum;
       }

       if(currentsum<0)
       {
        currentsum=0;
       }
    }
    cout<<"Maxsum = "<<maxsum;
    return 0;
}
