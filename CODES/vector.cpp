#include<bits/stdc++.h>
//#include<windows.h> //takes too much time
#include<conio.h>
#include<vector>
using namespace std;
int main(){
	system("color 9"); //any colour 1-15
	vector<char>v(10); //vector of length 10
	int i;
	cout<<"SIZE : "<<v.size()<<endl; //original size of vector
	// assign the elements of the vector
	for(i=0;i<10;i++)
	v[i]=i+'a';
	// display contents of the vector
	cout<<"Current Contents : \n";
	for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<"\n\n" ;
	// Expanding the vector
	cout<<"Expanding the vector\n";
	for(i=0;i<10;i++)
	v.push_back(i+10+'a'); // adds 10 more at the end
	cout<<"SIZE now :"<<v.size()<<endl;  //current size
	// display contents of the vector
	cout<<"Current Contents : \n";
	for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<"\n\n" ;
	//Change the contents of the vector
	for(i=0;i<v.size();i++)
	v[i]=toupper(v[i]);  //CAPITAL
	cout<<"Modified Contents : \n" ;
	for(i=0;i<v.size();i++)
	cout<<v[i]<<" ";
	cout<<"\n\n" ;
	
	system("pause"); //causes a pause in between
	//vector through an ITERATOR (Program 2)
	system("color 4");
	cout<<"\n\n NEXT PROGRAM \n" ;
	
	vector<char>a[10]; //size will remain 20 becoz of above progran
	vector<char>::iterator p;
	
	 // assign elements in vector a value 
	 p=v.begin();
	 i=0;
	 while(p!=v.end())
	 {               
	 	*p=i+'a';
	 	p++;
	 	i++;
	 }
	 // display contents of vector
	 cout<<"Original Content :\n ";
	 p=v.begin();
	 while(p!=v.end())
	 { cout<<*p<<" ";
	 p++; }
	 cout<<"\n\n" ;
	 
	 //change the contents
	 p=v.begin();
	 while(p!=v.end())
	 { *p=toupper(*p);
	 p++;
}
cout<<"Modified Contents :\n " ;
p=v.begin();
while(p!=v.end())
	 { cout<<*p<<" ";
	 p++; }
	 cout<<"\n\n" ;
	 
	return 0 ;
}
	
