#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){ //emoving replacing elements in STL Algorithms
char str[]="The STL is power programming" ;
vector<char> v,v2(30);
int i;
for(i=0;str[i];i++)
v.push_back(str[i]);

// demonstrates remove_copy 
cout<<" input sequence :\n";
for(i=0;i<v.size();i++)
cout<<v[i];
cout<<endl<<endl;
// remove all spaces
remove_copy(v.begin(),v.end(),v2.begin(),' ');

cout<<" result after removing the spaces: \n" ;
for(i=0;i<v2.size();i++)
cout<<v2[i];
cout<<endl<<endl;
 //now demonstrates replace_copy
cout<<" input sequence :\n";
for(i=0;i<v.size();i++)
cout<<v[i];
cout<<endl<<endl;
replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
cout<<" result after replacing spaces with colons:\n";
for(i=0;i<v2.size();i++)
cout<<v2[i];
cout<<endl<<endl;

//BINDERS bind1st & bind2nd  can also be used for removing

 return 0;
}
