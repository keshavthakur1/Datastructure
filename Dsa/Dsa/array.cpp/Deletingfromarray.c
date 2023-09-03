#include <stdio.h>
#include <stdlib.h>

struct Array {
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr) {
    printf("\nElements are:\n");
    for (int i = 0; i < arr.length; i++) {
        printf(" %d ", arr.A[i]);
    }
    printf("\n");
}

void Delete(struct Array *arr, int index) {
    if (index >= 0 && index < arr->length) {
        for (int i = index; i < arr->length - 1; i++) {
            arr->A[i] = arr->A[i + 1]; // Shift elements to the left
        }
        arr->length--; // Decrease the length of the array
    } else {
        printf("Invalid index for deletion.\n");
    }
}

int main() {
    struct Array arr = {{2, 3, 4, 5, 6, 6, 7, 8, 9}, 20, 9};
    
    printf("Original Array:");
    Display(arr);

    int index_to_delete = 3; // Index of the element to delete (e.g., element "5")
    Delete(&arr, index_to_delete);

    printf("Array after deletion at index %d:\n", index_to_delete);
    Display(arr);

    return 0;
}
