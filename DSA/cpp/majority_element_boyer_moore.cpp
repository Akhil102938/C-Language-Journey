#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a = {2, 2, 1, 1, 1, 2, 2};

    int candidate = a[0];
    int count = 0;

    for (int i = 0; i < a.size(); i++)
    {
        if (count == 0)
        {
            candidate = a[i];
        }

        if (a[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    cout << "Majority Element: " << candidate << endl;

    return 0;
}
