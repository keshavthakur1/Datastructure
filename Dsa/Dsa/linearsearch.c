// #include<stdio.h>
// #include<stdlib.h>

// int LinearSearch (struct arr,int key )
// {
//     int i ;
//     for (i=0;i<arr.length;i++)
//     {
//         if (key= =arr.A[i])
//         return i;
//     }
//     return -1;
// }

// int main(){

//     struct Array arr ={{2,3,4,5,6},10,5};
   
//    printf("%d\n",LinearSearch(arr,4));
//     Display (arr);
//     return 0;

// }
#include<stdio.h>

struct Array {
    int A[10];
    int size;
    int length;
};

int LinearSearch(struct Array arr, int key) {
    int i;
    for (i = 0; i < arr.length; i++) {
        if (key == arr.A[i])
            return i;
    }
    return -1;
}

int main() {
    struct Array arr = {{2, 3, 4, 5, 6}, 10, 5};
   
    printf("%d\n", LinearSearch(arr, 13));
    
    // Display the array
    int i;
    printf("Array: ");
    for (i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
    printf("\n");
    
    return 0;
}
