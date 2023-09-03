/*
//using dynamic memory


#include<stdio.h>
#include<stdlib.h>  // is included for memory allocation functions like malloc and free.


/*Define Struct Array: A structure named Array is defined to represent an array with the following members:
size: The maximum size of the array.
A: A pointer to the dynamically allocated array.
length: The current number of elements in the array.

struct Array   
{
    int size;
    int *A;
    int length;
};
// Display Function: A function Display is defined to display the elements of an array. It takes a struct Array as an argument and prints the elements:

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i = 0; i < arr.length; i++)
        printf("%d ", arr.A[i]); // Added space between %d and arr.A[i]
}

int main()
{
    struct Array arr;
    int n, i;

    printf("Enter the size of the array: "); // Added a prompt message
    scanf("%d", &arr.size);
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    printf("Enter the number of elements: "); // Added a prompt message and fixed variable name
    scanf("%d", &n); // Fixed the missing & before n

    for(i = 0; i < n; i++)
        scanf("%d", &arr.A[i]); // Fixed the missing & before arr.A[i]
    arr.length = n;

    Display(arr);

    free(arr.A); // Don't forget to free the allocated memory

    return 0;
}
*/
// using static memeory 
#include<stdio.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i = 0; i < arr.length; i++) // Removed the semicolon after the for loop
        printf("%d ", arr.A[i]); // Added space and corrected the index
}

int main()
{
    struct Array arr = {{2, 2, 3, 4, 5, 6}, 20, 6}; // Fixed the initialization
    Display(arr);
    return 0; // Changed return value to 0 for a successful program execution
}
