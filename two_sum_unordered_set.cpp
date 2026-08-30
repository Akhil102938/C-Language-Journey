#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> a = {2, 11, 15, 4, 7};
    unordered_set<int> seen;

    int target = 9;
    int i, needed;

    for(i = 0; i < a.size(); i++)
    {
        needed = target - a[i];

        if(seen.find(needed) != seen.end())
        {
            cout << "Pair : " << needed << " " << a[i];
            break;
        }

        seen.insert(a[i]);
    }

    return 0;
}
