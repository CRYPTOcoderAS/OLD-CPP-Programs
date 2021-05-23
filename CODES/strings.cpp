#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	string a="STRING handling C++ style" ;
	string b("STL power" );
	//above both inputs are correct
cout<<"initial strings : \n";
cout<<a<<endl<<b<<endl;
//inserting string
cout<<"\n insert str2 into str1";
a.insert(6,b); //after 6 char=> starting point
cout<<"\n"<<a<<endl;
//erasing the string
cout<<"\n Remove 9 chars from str1:";
a.erase(6,9);
cout<<"\n"<<a<<"\n\n";
//replacing the strings
cout<<" replace 8 char in str1 with str2:";
a.replace(7,8,b);
cout<<"\n"<<a;
return 0;
}


