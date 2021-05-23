#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int i;
	string s1="quick of mind, strong of body, pure of heart" ;
	string s2;
	i=s1.find("quick"); //in find() npos is not returned
	if(i!=string::npos)
	{
		cout<<"match found at"<<i<<endl;
		cout<<"remaining string is :\n";
		s2.assign(s1,i,s1.size());
		cout<<s2;
	}
	cout<<"\n\n";
	
	i=s1.find("strong");
	if(i!=string::npos)
	{
		cout<<"match found at"<<i<<endl;
		cout<<"remaining string is :\n";
		s2.assign(s1,i,s1.size());
		cout<<s2;
	}
	cout<<"\n\n";
	
	i=s1.find("pure");
	if(i!=string::npos)
	{
		cout<<"match found at"<<i<<endl;
		cout<<"remaining string is :\n";
		s2.assign(s1,i,s1.size());
		cout<<s2;
	}
	cout<<"\n\n";
	
	i=s1.rfind("of"); //rfind returns index at which it occurs within the 
					// invoking string if no match is found returns "npos"
	if(i!=string::npos)
	{
		cout<<"match found at"<<i<<endl;
		cout<<"remaining string is :\n";
		s2.assign(s1,i,s1.size());
		cout<<s2;
	}
	cout<<"\n\n";

	i=s1.find("of"); //find() function
	if(i!=string::npos)
	{
		cout<<"match found at"<<i<<endl;
		cout<<"remaining string is :\n";
		s2.assign(s1,i,s1.size());
		cout<<s2;
	}
	cout<<"\n\n";

return 0;
}
