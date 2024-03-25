
#include <stdio.h>

int findMin(int arr[], int size) {
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int arr[] = {10, 5, 20, 15, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    int min = findMin(arr, size);

    printf("The smallest number in the list is: %d\n", min);

    return 0;
}