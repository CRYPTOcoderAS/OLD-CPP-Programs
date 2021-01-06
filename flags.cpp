#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	float a;
	cin>>a;
	/*cout.setf(ios::showpos);
	cout.setf(ios::showpoint); */
	cout.setf(ios::showpoint | ios::showpos); //two in one
	cout.precision(4);
	cout.width(10);// only one line at a time
	cout<<a<<endl;
	cout.fill('*');
	cout.width(10);
	cout<<a<<endl;
	cout.setf(ios::left);
	cout.width(10);
	cout<<a;
	cout<<"\n\n\n\n";
	
	
	//manipulators  example
	cout<<hex<<100<<endl;
	cout<<setfill('?')<<right<<setw(15)<<2343.0; //ios::left still working if not changed
	return 0;
}

