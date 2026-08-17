#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> a;
    int n, x, i;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    for(i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    // Remove all even numbers
    for(i = 0; i < a.size(); )
    {
        if(a[i] % 2 == 0)
        {
            a.erase(a.begin() + i);
        }
        else
        {
            i++;
        }
    }

    // Sort remaining elements
    sort(a.begin(), a.end());

    cout << "\nAfter removing even numbers: ";

    for(i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }

    if(!a.empty())
    {
        cout << "\nSmallest = " << a.front();
        cout << "\nLargest = " << a.back();
    }

    return 0;
}
