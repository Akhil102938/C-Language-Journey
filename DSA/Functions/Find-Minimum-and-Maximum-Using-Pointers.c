#include <stdio.size.h>
#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    // Initialize min and max with the first element
    *min = arr[0];
    *max = arr[0];

    // Single pass through the array: O(n) time complexity
    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {3, 5, 1, 9, -2, 8, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum element: %d\n", min);
    printf("Maximum element: %d\n", max);

    return 0;
}
