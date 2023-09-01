#include<iostream>
using namespace std;

int main()
{


    int i, j;
    int A[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {5, 7, 7, 5}};  // This is an array allocated in the stack

    // METHOD 2
    int *B[3];

    B[0] = new int[4];
    B[1] = new int[4];
    B[2] = new int[4];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            B[i][j] = A[i][j];  // Copy values from A to B
            cout << B[i][j] << endl;
        }
    }


 return 0;

}