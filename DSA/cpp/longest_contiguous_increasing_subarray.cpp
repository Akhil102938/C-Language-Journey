#include<iostream>
#include<vector>
using namespace std;

int LIS(vector<int> a, int n)
{
    int maxlength = 1;
    int currentlength = 1;

    for(int i = 1; i < n; i++)
    {
        if(a[i] > a[i-1])
        {
            currentlength++;
        }
        else
        {
            currentlength = 1;
        }

        if(currentlength > maxlength)
        {
            maxlength = currentlength;
        }
    }

    cout << "MaxLength : " << maxlength;

    return maxlength;
}

int main()
{
    vector<int> a = {1,3,5,4,7,8,2};

    int n = a.size();

    LIS(a, n);

    return 0;
}
