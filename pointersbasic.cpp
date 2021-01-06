#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	int n=100;
	int *p=&n;
	int &m=*p;
	cout<<" n :"<<n<<" m :"<<m<<" *p :"<<*p<<endl;
	int k=5;
	cout<<"\n k= "<<k<<endl;
	p=&k;
	cout<<"*P : "<<*p<<endl;
	
	k=200;    
		cout<<"\n k= "<<k<<endl;              
	cout<<"*P : "<<*p<<endl;
	cout<<" n :"<<n<<" m :"<<m<<" *p :"<<*p<<endl;   
	return 0;
}

