#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	vector<char> a(10);
	vector<char> v2;
	char str[]="<VECTOR>";
	int i;
	// assign the elements of the vector
	for(i=0;i<10;i++)
	a[i]=i+'a';
	// display contents of the vector
	cout<<"Current Contents : \n";
	for(i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	cout<<"\n\n" ;
	
	vector<char>::iterator P=a.begin();
	P+=2; //point to 3rd variable
	 //insert 10 X's into vector a
	 a.insert(P,10,'X');
	 
	 //display contents after inserting
	 cout<<"Size after inserting :"<<a.size()<<endl;
	 cout<<" Contents after inserting : \n";
	for(i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	cout<<"\n\n" ;
	
	//remove those elements
	P=a.begin();
	P+=2;         // points to 3rd variable
	a.erase(P,P+10); //removes next 10 elements after 3rd variable
	
	 //display contents after erasing
	 cout<<"Size after erasing :"<<a.size()<<endl;
	 cout<<" Contents afte erasing : \n";
	for(i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	cout<<"\n\n" ;
	
	//copy characters from str into v2
	for(i=0;str[i];i++)
	v2.push_back(str[i]) ;
	// inssert v2 into a
	a.insert(P,v2.begin(),v2.end());
	 //display contents after  v2inserting
	 cout<<"Size after inserting v2 :"<<a.size()<<endl;
	 cout<<" Contents after inserting v2 : \n";
	for(i=0;i<a.size();i++)
	cout<<a[i]<<" ";
	cout<<"\n\n" ;
 	return 0;
}
