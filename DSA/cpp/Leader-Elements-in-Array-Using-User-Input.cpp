#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];
    int leaders[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxRight = arr[n - 1];
    int count = 0;

    leaders[count++] = maxRight;

    for(int i = n - 2; i >= 0; i--)
    {
        if(arr[i] >= maxRight)
        {
            maxRight = arr[i];
            leaders[count++] = arr[i];
        }
    }

    cout << "Leaders in the array are: ";

    for(int i = count - 1; i >= 0; i--)
    {
        cout << leaders[i] << " ";
    }

    return 0;
}
