#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	long long int a,c,h;
	cin>>a>>c>>h;
	int count=0;
	while(c!=h){
		count++;
		c=c+2;
		h=h-1;
			
	}
	if(count<a)
	cout<<"No\n";
	else  
	cout<<"Yes\n";
	cout<<count<<a;
}
return 0;
}
