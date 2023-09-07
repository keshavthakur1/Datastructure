#include <stdio.h>

// Define a constant for the maximum array size
#define MAX_SIZE 100

// Define the Array ADT structure
struct Array {
    int arr[5]; // Static array to store data
    int length;        // Current number of elements in the array
};

// Function to get an element at a specific index
int get(struct Array arr, int index) {
    if (index >= 0 && index < arr.length)
        return arr.arr[index];
    else {
        printf("Index out of bounds.\n");
        return -1; // Return a sentinel value to indicate an error
    }
}

// Function to set an element at a specific index
void set(struct Array *arr, int index, int x) {
    if (index >= 0 && index < arr->length)
        arr->arr[index] = x;
    else
        printf("Index out of bounds.\n");
}

// Function to find the maximum element in the array
int Max(struct Array arr) {
    if (arr.length == 0) {
        printf("Array is empty.\n");
        return -1; // Return a sentinel value to indicate an error
    }

    int max = arr.arr[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.arr[i] > max)
            max = arr.arr[i];
    }
    return max;
}

// Function to find the minimum element in the array
int Min(struct Array arr) {
    if (arr.length == 0) {
        printf("Array is empty.\n");
        return -1; // Return a sentinel value to indicate an error
    }

    int min = arr.arr[0];
    for (int i = 1; i < arr.length; i++) {
        if (arr.arr[i] < min)
            min = arr.arr[i];
    }
    return min;
}

// Function to calculate the sum of all elements in the array
int SUM(struct Array arr) {
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr.arr[i];
    }
    return sum;
}

// Function to calculate the average of all elements in the array
double AVG(struct Array arr) {
    if (arr.length == 0) {
        printf("Array is empty.\n");
        return -1.0; // Return a sentinel value to indicate an error
    }

    int sum = SUM(arr);
    return (double)sum / arr.length;
}

int main() {
    struct Array myArray;
    myArray.length = 5; // Initialize the length of the array
    myArray.arr[0] = 10;
    myArray.arr[1] = 20;
    myArray.arr[2] = 5;
    myArray.arr[3] = 15;
    myArray.arr[4] = 25;

    printf("Element at index 2: %d\n", get(myArray, 2));
    set(&myArray, 3, 50);
    printf("Maximum element: %d\n", Max(myArray));
    printf("Minimum element: %d\n", Min(myArray));
    printf("Sum of elements: %d\n", SUM(myArray));
    printf("Average of elements: %.2lf\n", AVG(myArray));

    return 0;
}
