#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={7,1,5,3,6,4};
    int i;
    int sub,maxdiff=0;
    int smallno= a[0];
    for(i=1;i<a.size();i++)
    {
        if(a[i]<smallno)
        {
            smallno = a[i];
        }
        else
        {
            sub = a[i] - smallno;
            if(maxdiff < sub)
            {
                maxdiff = sub;
            }
            
        }
        
       }
    cout<<"Maximum difference :"<<maxdiff;
        
        return 0;
}
