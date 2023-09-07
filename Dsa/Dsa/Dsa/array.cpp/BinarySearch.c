#include <stdio.h>

// Define the Array ADT structure
struct Array {
    int arr[20]; // Static array to store data (adjust size as needed)
    int length;  // Current number of elements in the array
};

int binarySearch(struct Array arr, int key) {
    int l = 0;
    int h = arr.length - 1;

    while (l <= h) {
        int mid = l + (h - l) / 2; // Calculate the middle index

        if (arr.arr[mid] == key)
            return mid; // Key found at the middle index

        if (arr.arr[mid] > key)
            h = mid - 1; // Key is in the left subarray
        else
            l = mid + 1; // Key is in the right subarray
    }

    return -1; // Key not found in the array
}

int main() {
    struct Array arr = {{2, 3, 5, 5, 34}, 5}; // Initialize the array and its length
    printf("%d\n", binarySearch(arr, 15));
    return 0;
}
                                                                    