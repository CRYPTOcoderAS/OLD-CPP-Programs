#include <iostream>
#include <vector>
#include <fstream>

#define lli long long int
using namespace std;

lli number_of_ways(int N, vector<int> K){
  lli total = 0;
  for (auto it : K) 
    total += it;
  lli A = (total * (total - 1)) / 2;

  lli B = 0;
  for (auto it : K)
    B += (it * (it - 1)) / 2;
  
  return A - B;
}

int main() {
 // ifstream cin("input.txt");

  int N;
  cin >> N;
  vector<int> K(N);
  for (int i = 0; i < N; i++)
    cin >> K[i];
  cout << number_of_ways(N, K);
  //There are N different types of balls. There are k_1 balls of type 1, k_2 balls of type 22, and so on to k_n
// How many ways can you choose 2 balls that are of different types?


  return 0;
}
