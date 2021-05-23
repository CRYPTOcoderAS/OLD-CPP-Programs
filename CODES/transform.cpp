#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
//transformation  function
double reciprocal(double i)
{
	return 1.0/i;
}
int main(){
 list<double> v;
 int i;
 for(i=1;i<10;i++)	
 v.push_back(i);
 
 cout<<" Original contents of list :\n";
 list<double>::iterator p;
 p=v.begin();
while(p!=v.end())
{
	cout<<*p<<" ";
	p++;
}
cout<<"\n\n" ;

//transform the values 
p=transform(v.begin(),v.end(), v.begin(),reciprocal);
 cout<<" Transformed contents of list :\n";
 //list<double>::iterator p;
 p=v.begin();
while(p!=v.end())
{
	cout<<*p<<"  ";
	p++;
}
return 0;
}

