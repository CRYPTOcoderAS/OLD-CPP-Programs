#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	list<int> a,a2; //creates an empty list
	int i;
	for(i=0;i<10;i++)
	a.push_back(i); //adds every elemnt at last/back
	for(i=0;i<10;i++)
	a2.push_front(i); //adds every element in front
	cout<<" list printed forwards : \n";
	list<int>::iterator p=a.begin();
	while(p!=a.end())
	{
		cout<<*p<<" ";
		p++;
	} cout<<"\n\n" ;
	
	cout<<" list printed for a2 list : \n";
	p=a2.begin();
	while(p!=a2.end())
	{
		cout<<*p<<" ";
		p++;
	} cout<<"\n\n" ;
	
	cout<<" list printed backwards :\n";
	p=a.end();
	while(p!=a.begin())
	{
	 p--; /*decrement pointer before using becoz end returns iterator
	  to an object that is one past the last object actually */
		cout<<*p<<" ";
		}
	 cout<<"\n\n" ;
	
	//change the contents of the list
	p=a.begin();
	while(p!=a.end())
	{ 
	*p=*p+100;
	p++;
}
cout<<" contents modified :\n ";
p=a.begin();
	while(p!=a.end())
	{
		cout<<*p<<" ";
		p++;
	} cout<<"\n\n" ;
	return 0;
	
	// for sorting we can use the a.sort() -> increasing order
	// list a2 merges in a and cout a as normal for results
}
