#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main() {
	vector<int> v;
	int i;
	for(i=0;i<5;i++)
	v.push_back(i);
	vector<int>::iterator P;
	cout<<" original array : \n";
	P=v.begin();
	while(P != v.end()){
		 cout<<*P++<<" ";
		 
	}
	cout<<"\n\n" ;
	 
	 P=v.begin();
	 P=P+2; //points 2nd elemnt
	 
	 //create insert_iterator from 2nd pos
	 insert_iterator<vector<int> >i_P(v,P);
	 
	 //inserts rather than overwrite
	 *i_P++ =100;
	*i_P++ =200;
	 
	 cout<<"|n array after insertion:\n";
	P=v.begin();
	while(P!=v.end()){
		 cout<<*P<<" ";
		 P++;
	}
	cout<<"\n\n" ;
	 //other such pre-defined iterators are;
	/* back_insert		front_insert 		reverse */
	 
	
return 0;
}

