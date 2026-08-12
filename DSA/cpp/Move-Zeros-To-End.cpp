#include <iostream>
using namespace std;

void MoveZeros(int a[], int n)
{
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    // Fill the remaining positions with 0
    while (j < n)
    {
        a[j] = 0;
        j++;
    }

    // Print the array
    cout << "Array after moving zeros to the end: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    int a[] = {2, 0, 4, 0, 5, 0, 1};
    int n = sizeof(a) / sizeof(a[0]);

    MoveZeros(a, n);

    return 0;
}
