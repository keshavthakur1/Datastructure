#include <iostream>

class ArrayADT {
private:
    int* arr;
    int size;
public:
    // Constructor
    ArrayADT(int n) {
        size = n;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = 0; // Initialize all elements to 0
        }
    }

    // Destructor
    ~ArrayADT() {
        delete[] arr;
    }

    // Function to display the elements of the array
    void display() {
        if (size == 0) {
            std::cout << "Array is empty." << std::endl;
            return;
        }

        std::cout << "Array Elements: ";
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }

    // Function to add an element to the end of the array
    void add(int value) {
        // Increase the array size by 1
        size++;

        // Create a new array with the increased size
        int* newArr = new int[size];

        // Copy elements from the old array to the new array
        for (int i = 0; i < size - 1; i++) {
            newArr[i] = arr[i];
        }

        // Add the new element at the end of the new array
        newArr[size - 1] = value;

        // Delete the old array and assign the new array
        delete[] arr;
        arr = newArr;
    }

    // Function to insert an element at a specific index
    void insert(int index, int value) {
        if (index < 0 || index > size) {
            std::cout << "Invalid index for insertion." << std::endl;
            return;
        }

        // Increase the array size by 1
        size++;

        // Create a new array with the increased size
        int* newArr = new int[size];

        // Copy elements from the old array to the new array, shifting as needed
        for (int i = 0, j = 0; i < size; i++) {
            if (i == index) {
                newArr[i] = value;
            } else {
                newArr[i] = arr[j];
                j++;
            }
        }

        // Delete the old array and assign the new array
        delete[] arr;
        arr = newArr;
    }

    // Function to delete an element at a specific index
    void remove(int index) {
        if (index < 0 || index >= size) {
            std::cout << "Invalid index for deletion." << std::endl;
            return;
        }

        // Shift elements to the left to overwrite the element at the specified index
        for (int i = index; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }

        // Decrease the array size by 1
        size--;

        // Create a new array with the decreased size
        int* newArr = new int[size];

        // Copy elements from the old array to the new array
        for (int i = 0; i < size; i++) {
            newArr[i] = arr[i];
        }

        // Delete the old array and assign the new array
        delete[] arr;
        arr = newArr;
    }

    // Other operations like search, etc. can be added here.
};

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    ArrayADT myArray(n);

    // Initialize the array (for demonstration purposes)
    for (int i = 0; i < n; i++) {
        myArray.add(i + 1);
    }

    // Display the array
    myArray.display();

    // Add an element to the end of the array (e.g., add 99 to the end)
    myArray.add(99);
    myArray.display();

    // Insert an element at index 2 (e.g., insert 55 at index 2)
    myArray.insert(2, 55);
    myArray.display();

    // Delete the element at index 4
    myArray.remove(4);
    myArray.display();

    return 0;
}
