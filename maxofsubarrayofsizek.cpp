#include <iostream>
#include <deque>
#include <vector>

using namespace std;

vector<int> max_of_subarrays(const vector<int>& arr, int k) {
  int n = arr.size();
  vector<int> result;
  deque<int> window;

  
  for (int i = 0; i < k; ++i) {
    while (!window.empty() && arr[i] >= arr[window.back()]) {
      window.pop_back();
    }
    window.push_back(i);
  }

  
  for (int i = k; i < n; ++i) {
    result.push_back(arr[window.front()]);

    while (!window.empty() && window.front() <= i - k) {
      window.pop_front();
    }

    while (!window.empty() && arr[i] >= arr[window.back()]) {
      window.pop_back();
    }
    window.push_back(i);
  }

  
  result.push_back(arr[window.front()]);

  return result;
}

int main() {
  vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};
  int k = 3;
  vector<int> result = max_of_subarrays(arr, k);
  for (int num : result) {
    cout << num << " ";
  }
  cout << endl;
  return 0;
}
