#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
//creating own manipulators
ostream &sethex(ostream &stream) //hexadecimal output
{
stream.setf(ios::showbase);
stream.setf(ios::hex,ios::basefield);
return stream ;
}
ostream &ra(ostream &stream) //right arrow
{
	stream<<"------> ";
	return stream;
}
ostream &la(ostream &stream) //left arrow
{
	stream<<" <------ ";
	return stream;
}

int main(){
	int a;
	string s;
	cout<<'\a';//bell sound
	cout<<"Enter any number :" ;
	cin>>a;
	cout<<a<<" changed to "<<sethex<<a<<endl;
	cout<<"enter name/string : ";
	cin>>s;
	cout<<s<<ra<<"\n";
	cout<<ra<<s<<la;
	/* for input use istream &getpass(istream &stream) ---"istream" */ 
	return 0;
}
