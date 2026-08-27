#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a = {2,2,7,5,5,9,9};

    int ans = 0;

    for(int i = 0; i < a.size(); i++)
    {
        ans = ans ^ a[i];
    }

    cout << "Non repeated element : " << ans;

    return 0;
}
