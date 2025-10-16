#include <stdio.h>

void rightRotate(int arr[], int n, int k) {
    k = k % n; 
    for (int i = 0; i < k; i++) {
        int last = arr[n - 1];
        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 1; 

    printf("Original array: ");
    printArray(arr, n);

    rightRotate(arr, n, k);

    printf("Array after %d right rotations: ", k);
    printArray(arr, n);

    return 0;
}
