#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
 template <typename X>
 void swap(X &A, X &B)
 {
 	X temp;
temp =A ;
A=B;
B=temp;
}
int main()
{
	 int i=10,j=20;
	 double x=10.1 , y=23.3;
	 char a='A', b='B';
	  cout<<"\nORIGINALS :"<<i<<" "<<j<<endl<<x<<" "<<y<<endl;
	  cout<<a<<" "<<b<<endl;
	  swap(i,j);
	  swap(x,y);
	  swap(a,b);
	  // temp makes function independent of the datatype
	  cout<<"SWAPPED :"<<i<<" "<<j<<endl<<x<<" "<<y<<endl;
	  cout<<a<<" "<<b<<endl;
	  return 0 ;
	  // see turboc++ example
}

