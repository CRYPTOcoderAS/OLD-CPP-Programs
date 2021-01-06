#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int kth_largest(vector<int> &v, int k) {  
  sort(v.begin(), v.end());
  reverse(v.begin(), v.end());
  return v[k - 1];
}

int main() {
  int N = 5;
  vector<int> v = {3, 6, 5, 1, 4};

  cout << kth_largest(v, 3) << "\n";
  cout << kth_largest(v, 4) << "\n";
//Given an array, A[], consisting of N integers; for a given KK, find the K^{th}
//largest element in the array.


  return 0;
}
