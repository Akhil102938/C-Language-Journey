#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main()
{
    vector<int> a = {-10, -8, 1, 3, 5};

    int fl = INT_MIN, sl = INT_MIN;
    int sm = INT_MAX, ssm = INT_MAX;

    for(int i = 0; i < a.size(); i++)
    {
        // Find first and second largest
        if(a[i] > fl)
        {
            sl = fl;
            fl = a[i];
        }
        else if(a[i] > sl)
        {
            sl = a[i];
        }

        // Find first and second smallest
        if(a[i] < sm)
        {
            ssm = sm;
            sm = a[i];
        }
        else if(a[i] < ssm)
        {
            ssm = a[i];
        }
    }

    int product1 = fl * sl;
    int product2 = sm * ssm;

    int maxproduct;

    if(product1 > product2)
    {
        maxproduct = product1;
    }
    else
    {
        maxproduct = product2;
    }

    cout << "Maximum Product of Two Elements = " << maxproduct << endl;

    return 0;
}
