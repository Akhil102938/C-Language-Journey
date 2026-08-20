#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a={7,1,5,3,6,4};
    int i,Buy,sell,maxprofit=0;
    Buy = a[0];
    for(i = 1; i < a.size(); i++)
    {
        if(a[i]<Buy)
        {
            Buy=a[i];

        }
        else 
        {
            int  profit = a[i] - Buy;
            
            if(maxprofit<profit)
            {
                maxprofit = profit;
                sell = a[i];
            }
        }
    }
    cout<<"Buy at :"<<Buy<<endl;
    cout<<"sell at :"<<sell<<endl;
    cout<<"Max Profit :"<<maxprofit<<endl;
    return 0;
}
