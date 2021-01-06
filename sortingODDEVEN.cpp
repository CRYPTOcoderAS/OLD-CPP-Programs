#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(int a, int b) {
  int r1 = a%2;
  int r2 = b%2;
  if (r1 == 0 && r2 == 0)
    return a > b;
  if (r1 == 1 && r2 == 1)
    return a < b;
  if (r1 == 0) // r2 == 1
    return 0;
  else  // r1 == 1 & r2 == 0
    return 1;
}

int main() {
  vector<int> v = {1,2,3,4,5,6,7,8,9};
  sort(v.begin(), v.end(), compare);

  for (auto it : v) cout << it << " ";
  return 0;
  //Given a list of integers, rearrange them so that all odd numbers appear before even numbers.
  // Additionally, odd numbers are in non-decreasing order and even numbers are in non-increasing order.
}
