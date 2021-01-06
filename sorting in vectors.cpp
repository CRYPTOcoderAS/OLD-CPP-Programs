#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
int X[10]= {4,2,5,3,5,8,3,3,2};    //10th place is 0 
vector<int>A;
int i;

for(i=0;i<10;i++)
	A.push_back(X[i]);
		cout<<" increasing order :\n " ;
sort(A.begin(),A.end());
for(i=0;i<10;i++)
cout<<A[i]<<" ";
cout<<"\n\n";
 	cout<<" decreasing order :\n " ;
 sort(A.rbegin(),A.rend());
for(i=0;i<10;i++)
cout<<A[i]<<" ";

 return 0;
}

