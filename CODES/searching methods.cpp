#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
//algorithm 1
int a = 0, b = n-1;
while (a <= b) {
int k = (a+b)/2;
if (array[k] == x) {
// x found at index k
}
if (array[k] > x) b = k-1;
else a = k+1;
}
//algorithm 2
int k = 0;
for (int b = n/2; b >= 1; b /= 2) {
while (k+b < n && array[k+b] <= x) k += b;
}
if (array[k] == x) {
// x found at index k


/*Binary search can also be used to find the maximum value for a function
  that isfirst increasing and then decreasing. 
  Our task is to find a position k such that
  •f(x)<f(x+1) whenx<k, and
  •f(x)>f(x+1) whenx=k.
  The idea is to use binary search for finding the largest value of x 
  for whichf(x)<f(x+1).
   This implies thatk=x+1 becausef(x+1)>f(x+2).
 The followingcode implements the search: */
 
 int x = -1;
 for (int b = z; b >= 1; b /= 2)
  {while (f(x+b) < f(x+b+1))
   x += b;
   }
   int k = x+1;
}

