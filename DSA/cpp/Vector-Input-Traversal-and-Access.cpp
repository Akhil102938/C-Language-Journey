#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a;
    int n,value,i;

    cout<<"Enter Size :";
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>value;

        a.push_back(value);
    }

    cout<<"Vector elements :";

    for(i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<a.back();
    cout<<a.front();

    return 0;
}
