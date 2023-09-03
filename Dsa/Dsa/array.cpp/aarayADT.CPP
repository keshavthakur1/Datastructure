#include <iostream>
#include <stdexcept>

 template <typename T>
class ArrayADT {
private:
    T* array;
    int size;

public:
    ArrayADT(int size) {
        this->size = size;
        array = new T[size];
    }

    ~ArrayADT() {
        delete[] array;
    }

    void insert(int index, T value) {
        if (index >= 0 && index < size) {
            array[index] = value;
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    void remove(int index) {
        if (index >= 0 && index < size) {
            array[index] = T(); // Set the element to the default value (0 for numeric types, null for pointers, etc.)
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    T& access(int index) {
        if (index >= 0 && index < size) {
            return array[index];
        } else {
            throw std::out_of_range("Index out of bounds");
        }
    }

    int getSize() {
        return size;
    }

    int search(T value) {
        for (int i = 0; i < size; i++) {
            if (array[i] == value) {
                return i;
            }
        }
        return -1; // Element not found
    }
};

int main() {
    // Example usage of the ArrayADT
    ArrayADT<int> intArray(5);

    intArray.insert(0, 10);
    intArray.insert(1, 20);
    intArray.insert(2, 30);

    std::cout << "Element at index 1: " << intArray.access(1) << std::endl;

    intArray.remove(1);

    std::cout << "Size of the array: " << intArray.getSize() << std::endl;

    int searchResult = intArray.search(30);
    if (searchResult != -1) {
        std::cout << "Value 30 found at index " << searchResult << std::endl;
    } else {
        std::cout << "Value 30 not found in the array." << std::endl;
    }

    return 0;
}
