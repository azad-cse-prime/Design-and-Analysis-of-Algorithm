#include <stdio.h>

// Get maximum value in array
int getMax(int arr[], int n) {
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}

// Counting sort according to digit represented by exp
void countSort(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0};

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Cumulative count
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build output array (stable)
    for (int i = n - 1; i >= 0; i--)
        output[--count[(arr[i] / exp) % 10]] = arr[i];

    // Copy back to original array
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Main radix sort function
void radixSort(int arr[], int n) {
    int m = getMax(arr, n);          // Find max to know digits
    for (int exp = 1; m / exp > 0; exp *= 10)  // Loop through digits
        countSort(arr, n, exp);      // Sort by current digit
}

// Print array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// Driver code
int main() {
    int arr[] = {97, 57, 699, 208, 734, 125};
    int n = sizeof(arr) / sizeof(arr[0]);

    radixSort(arr, n);  // Sort array
    printArray(arr, n); // Print sorted array
    return 0;
}
