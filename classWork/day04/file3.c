// #include<stdio.h>
// #define CAP 5
// int main()
// {
//     int val1 = 101;
//     int arr[CAP] = {10,20,30,40,50};
//     int val2=102;

//     printf("\narr[5]=%d",arr[CAP]);

//     printf("\n\n");
//     return 0;
// }

// Array Question 6

#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 7, 45, 99, 22};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);

    printf("The greatest number in the list is: %d\n", max);

    return 0;
}


// #include <stdio.h>

// int findMin(int arr[], int size) {
//     int min = arr[0];
//     for (int i = 1; i < size; i++) {
//         if (arr[i] < min) {
//             min = arr[i];
//         }
//     }
//     return min;
// }

// int main() {
//     int arr[] = {22, 45, 66, 2, 99};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int min = findMin(arr, size);

//     printf("The smallest number in the list is: %d\n", min);

//     return 0;
// }

