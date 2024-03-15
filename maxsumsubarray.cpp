#include<iostream>
using namespace std;

int main() {
    int arr[] = {1, 4, 2, 10, 2, 3, 1, 0, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4; 

    int i = 0, j = 0;
    int sum = 0;
    int maxSum = INT_MIN; 

    while (j < n) {
        sum = sum + arr[j];
        if (j - i + 1 < k) {
            j++;
        } else if (j - i + 1 == k) {
            maxSum = max(maxSum, sum);
            sum = sum - arr[i]; 
            i++;
            j++;
        }
    }

    cout << "Maximum subarray sum of size " << k << " is: " << maxSum << endl;

    return 0;
}
