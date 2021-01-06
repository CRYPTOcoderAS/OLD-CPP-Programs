#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	list<int> a;
	int i;
	for(i=0;i<10;i++)
	a.push_back(i);
cout<<" original list :\n";
list<int>::iterator p=a.begin();
while(p!=a.end()){
cout<<*p<<" ";
p++;
}
 cout<<"\n\n" ;

 p=transform(a.begin(),a.end(),a.begin(),negate<int>()); //call func object

cout<<" Negated list :\n";
//list<int>::iterator 
p=a.begin();
while(p!=a.end()){
cout<<*p<<" ";
p++;
}
cout<<"\n\n\n" ; 
// other built-in functions
/* plus	minus  multiplies	divides modulus  equal_to
   greater  greater_equal  less  logical_and   logical_or */

list<double> val;
list<double> div;   //div=divisors
for(i=0;i<100;i+=10)
val.push_back((double)i);
	for(i=1;i<11;i++)// 11 becoz ab0ve is from 0
	div.push_back(3.0);

cout<<" original contents :\n";
list<double>::iterator s=val.begin();
while(s!=val.end()){
cout<<*s<<" ";
s++;
} 
cout<<"\n\n";
//transform value
s=transform(val.begin(),val.end(),div.begin(),val.begin(),divides<double>());
cout<<" divided contents :\n" ;
s=val.begin();
while(s!=val.end()){
cout<<*s<<" ";
s++;
} 
   
  return 0;
}
