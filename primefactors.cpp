#include <iostream>
#include <fstream>
using namespace std;

void print_prime_factors(int N){
 
 
  for (int i = 2; i * i <= N; i++) {
  	
    if (N%i == 0){
      cout << i << " ";
      cout<<N<<""<<endl;
      while (N%i == 0) 
      N /= i;
    }
  }
 if (N > 1)
  cout << N << " ";
 cout << "\n";
}

int main() {
  //ifstream cin("input.txt");

  int N;
  cin >> N;
  print_prime_factors(N);
  return 0;
}
