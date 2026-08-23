#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> a = {1, 2, 3, 1};

    unordered_set<int> seen;
    bool duplicate = false;

    for (int i = 0; i < a.size(); i++)
    {
        if (seen.find(a[i]) != seen.end())
        {
            duplicate = true;
            break;
        }

        seen.insert(a[i]);
    }

    if (duplicate)
    {
        cout << "Duplicate Found" << endl;
    }
    else
    {
        cout << "No Duplicate Found" << endl;
    }

    return 0;
}
