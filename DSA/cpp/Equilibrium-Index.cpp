#include <iostream>
#include <vector>
using namespace std;

void Equilibrium(vector<int> &a)
{
    int totalSum = 0;
  
    for(int i = 0; i < a.size(); i++)
    {
        totalSum += a[i];
    }

    int leftSum = 0;

    for(int i = 0; i < a.size(); i++)
    {
        int rightSum = totalSum - leftSum - a[i];

        if(leftSum == rightSum)
        {
            cout << "Equilibrium Index = " << i << endl;
            return;
        }

        leftSum += a[i];
    }

    cout << "No Equilibrium Index";
}

int main()
{
    vector<int> v = {1,3,5,2,2};

    Equilibrium(v);

    return 0;
}
