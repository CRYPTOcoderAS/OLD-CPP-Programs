#include<bits/stdc++.h>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
string str1("Strings handling is easy in C++");
string::iterator p;
unsigned int i;
//use size 
for(i=0;i<str1.size();i++)
cout<<str1[i];
cout<<"\n\n";

//use iterator
p=str1.begin();
while(p!=str1.end())
cout<<*p++;
cout<<"\n\n";

//use count()  algorithm
i=count(str1.begin(), str1.end(), 'i');
cout<<" there are "<<i<<" i's in string \n\n";

//use transform()
transform(str1.begin(), str1.end(), str1.begin(),::toupper);
p=str1.begin();
while(p!=str1.end())
cout<<*p++;

cout<<"\n\n";
 return 0;
}
