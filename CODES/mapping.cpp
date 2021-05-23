#include<iostream>
#include<map>
#include<conio.h>
using namespace std;
 int main()
 {
 	map<string,long>pb;//pb = phonebook
 	int n ;
 	string name;
 	cin>>n; //names in phonebook
 	for(int i=0;i<n;i++)
 	{ long num;
 	cin>>name>>num;
 	pb[name]=num;
 }
 while(cin>>name) //takes all inputs
 {
 	if(pb[name])
 	cout<<name<<"="<<pb[name]<<endl;
 	else
 	cout<<"Not Found"<<endl;
 }
 return 0 ;
 
}
 	

