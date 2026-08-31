#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a = {1, 1, 0, 1, 1, 1, 0, 1};
    int i,currentlength=0,maxlength=0;
    
    for(i=0;i<a.size();i++)
    {
        if(a[i] == 1)
        {
            currentlength++;
        }
        else
        {
            currentlength=0;
        }
        if(currentlength > maxlength)
    {
        maxlength = currentlength;
    }
     }
    
    cout<<"Max. Length of 1s :"<<maxlength;
    return 0;
}
