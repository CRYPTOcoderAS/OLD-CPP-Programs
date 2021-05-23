#include<bits/stdc++.h>
#include<conio.h>
#include<map>
using namespace std;
int main() {
	map<char,int> m;
	int i;
	// put data in pairs into map
	for(i=0;i<26;i++){
	m.insert(pair<char,int>('a'+i,65+i));//ONLY SMALL LETTERS 
}
char ch;
cout<<" enter key " ;
cin>>ch ;
cout<<"\n\n" ;
map<char,int>::iterator p;
 //find given key value
 p=m.find(ch);
 if(p!=m.end())
 cout<<" its ASCII code is : "<<p->second<<endl;
 else 
 cout<<" key not on the map ";
return 0;
}
