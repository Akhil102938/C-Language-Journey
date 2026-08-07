#include <iostream>
using namespace std;

int firstNonRepeating(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1)
        {
            return arr[i];
        }
    }

    return -1;
}

int main()
{
    int arr[] = {4, 5, 1, 2, 1, 5, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = firstNonRepeating(arr, n);

    if (result != -1)
        cout << "First Non-Repeating Element: " << result;
    else
        cout << "No Non-Repeating Element";

    return 0;
}
