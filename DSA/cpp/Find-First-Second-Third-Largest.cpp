#include<iostream>
#include<climits>
using namespace std;

int main()
{
    // Input array
    int a[5] = {10, 20, 30, 40, 60};

    int i;

    // fl = First Largest
    // sl = Second Largest
    // tl = Third Largest
    int fl, sl, tl;

    // Initialize all largest values with minimum integer value
    fl = sl = tl = INT_MIN;

    // Traverse the array only once
    for(i = 0; i < 5; i++)
    {
        // Update first, second and third largest
        if(a[i] > fl)
        {
            tl = sl;
            sl = fl;
            fl = a[i];
        }
        // Update second and third largest
        else if(a[i] != fl && a[i] > sl)
        {
            tl = sl;
            sl = a[i];
        }
        // Update only third largest
        else if(a[i] != fl && a[i] != sl && a[i] > tl)
        {
            tl = a[i];
        }
    }

    // Display the results
    cout << "First Largest in Array  : " << fl << endl;
    cout << "Second Largest in Array : " << sl << endl;
    cout << "Third Largest in Array  : " << tl << endl;

    return 0;
}
