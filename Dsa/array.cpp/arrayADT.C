

#include <stdio.h>
#include <stdlib.h>

struct GenericArray {
    void *data;
    size_t size;
    size_t elementSize;
};

struct GenericArray createArray(size_t size, size_t elementSize) {
    struct GenericArray arr;
    arr.size = size;
    arr.elementSize = elementSize;
    arr.data = malloc(size * elementSize);
    if (arr.data == NULL) {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    return arr;
}

void setElement(struct GenericArray *arr, size_t index, void *value) {
    if (index < arr->size) {
        char *dest = (char *)(arr->data) + (index * arr->elementSize);
        char *src = (char *)value;
        for (size_t i = 0; i < arr->elementSize; i++) {
            dest[i] = src[i];
        }
    } else {
        fprintf(stderr, "Index out of bounds\n");
        exit(EXIT_FAILURE);
    }
}

void* getElement(struct GenericArray *arr, size_t index) {
    if (index < arr->size) {
        return (char *)(arr->data) + (index * arr->elementSize);
    } else {
        fprintf(stderr, "Index out of bounds\n");
        exit(EXIT_FAILURE);
    }
}

void destroyArray(struct GenericArray *arr) {
    free(arr->data);
    arr->data = NULL;
    arr->size = 0;
    arr->elementSize = 0;
}

int main() {
    struct GenericArray intArray = createArray(5, sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        int value = i * 10;
        setElement(&intArray, i, &value);
    }
    
    for (int i = 0; i < 5; i++) {
        int *element = (int *)getElement(&intArray, i);
        printf("Element at index %d: %d\n", i, *element);
    }
    
    destroyArray(&intArray);
    
    return 0;
}































































































































