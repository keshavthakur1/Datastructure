#include <stdio.h>

struct array {
    int A[100]; // Assuming a fixed size array, adjust as needed
    int length;
};

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int LinearSearch(struct array *arr, int key) {
    int i;
    int length = arr->length;

    for (i = 0; i < length; i++) {
        if (arr->A[i] == key) {
            swap(&arr->A[i], &arr->A[i - 1]);
            return i;
        }
    }
    return -1;
}

int ImprovedLinearSearch(struct array *arr, int key) {
    int i;
    for (i = 0; i < arr->length; i++) {
        if (key == arr->A[i]) {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int main() {
    struct array arr;
    arr.length = 5;

    arr.A[0] = 10;
    arr.A[1] = 20;
    arr.A[2] = 30;
    arr.A[3] = 40;
    arr.A[4] = 50;

    int key = 20;
    int result = LinearSearch(&arr, key);

    if (result != -1) {
        printf("Element found at index %d\n", result);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
