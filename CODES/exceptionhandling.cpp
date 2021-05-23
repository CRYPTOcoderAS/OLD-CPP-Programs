#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

void Xhandler(int test)
{ try
	{
	if((test==0)||(test))
	throw test;
	//throw(int,char)  only throws ints and chars
	}
catch(int i)     // 'catch(...)' catches all other exceptions
	{
	cout<<"\nCaught Exception :"<<i<<endl;
	}
}
int main()
{   int a;
system("color 4");
	cout<<"Enter any thing : ";
	cin>>a;
	
	Xhandler(a);
	cout<<"End";
	return 0;
	//gives error message when input is any int
}

