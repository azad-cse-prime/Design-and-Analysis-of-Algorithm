#include <stdio.h>
#include <stdlib.h>

void countingSort(int arr[], int n) {
    int i;
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    int *count = (int *)calloc(max + 1, sizeof(int));
    if (count == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    for (i = 1; i <= max; i++) {
        count[i] += count[i - 1];
    }

    int *output = (int *)malloc(n * sizeof(int));
    if (output == NULL) {
        printf("Memory allocation failed!\n");
        free(count);
        return;
    }

    for (int i = n - 1; i >= 0; i--) {
        output[--count[arr[i]]] = arr[i];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }

    free(count);
    free(output);
}

int main() {
    int arr[] = {1,2,4,3,0,2,1,7,1,4,3,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    countingSort(arr, n);

    printf("Sorted array:   ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
