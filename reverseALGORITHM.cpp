#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	vector<int> a;
	int i;
	for(i=0;i<15;i++)
	a.push_back(i);
cout<<" Initial : \n";
for(i=0;i<a.size();i++)
cout<<a[i]<<" ";
cout<<"\n\n" ;

reverse(a.begin(),a.end());

cout<<" Reversed : \n";
for(i=0;i<a.size();i++)
cout<<a[i]<<" ";
cout<<"\n\n" ;

return 0;
}


