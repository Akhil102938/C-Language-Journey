#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    vector<int> a = {10,-5,30,20,-8,30,50,10};
    int i;
    cout<<"Elements :";
    for(i=0;i<a.size();i++)
    {
        cout<<" "<<a[i];
    }
    for(i=0;i<a.size();)
    {
       if(a[i]<0)
        {
         a.erase(a.begin()+i);
        }
      else
      {
        i++;
      }
    }
    cout<<endl;
    cout<<endl;
    cout<<"positive elements :"<<endl;
    for(i=0;i<a.size();i++)
    {
     cout<<" "<<a[i];
    }
    cout<<endl;
    cout<<endl;
    cout<<"after sort :";
    sort(a.begin(),a.end());
    for( int x : a)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<endl;
    int fl,sl;
    fl=sl=INT_MIN;
    for(i=0;i<a.size();i++)
    {
        if(a[i]>fl)
        {
            sl=fl;
            fl=a[i];
        }
        else if(a[i] !=fl && a[i]>sl)
        {
            sl=a[i];
        }
    }
    cout<<"first largest no. :"<<fl<<endl;
    cout<<endl;
    cout<<"second largest no. :"<<sl<<endl;
    cout<<endl;
    return 0;
}
