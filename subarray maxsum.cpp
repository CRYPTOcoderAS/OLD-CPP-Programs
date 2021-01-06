#include<bits/stdc++.h>
#include<conio.h>
//largest possible sum of a sequence 
//of consecutive values in the array2
using namespace std;
  int main()
  {    int n;
  cin>>n;
  	int best = 0, sum = 0;
  	int array[n];
	  for (int k = 0; k < n; k++) 
	  cin>>array[k];
for (int k = 0; k < n; k++) {
sum = max(array[k],sum+array[k]);
best = max(best,sum);
}
cout << best << "\n";
	  return 0;
}
//-1 2 4 -3 5 2 -5 2
