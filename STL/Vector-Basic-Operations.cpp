#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(5);
    v.push_back(10);
    v.push_back(15);

    v.pop_back();

    cout << v.size() << endl;
    cout << v[0] << " " << v[1];
}
