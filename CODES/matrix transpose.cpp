#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	int i,j;
	int a[10][10];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		cin>>a[i][j];
	}
				 cout<<"\n\n";
				 
	for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{cout<<a[i][j]<<" ";}
		cout<<endl;
	}            cout<<"\n\n";
			int t;
			for(i=0;i<3;i++){
		for(j=i+1;j<3;j++)
		{
			t=a[i][j];
			a[i][j]=a[j][i];
			a[j][i]=t;
		}}
		cout<<"\n\n";
		for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{cout<<a[i][j]<<" ";}
		cout<<endl;
	}                cout<<"\n\n";
					  for(i=0;i<3;i++){
		for(j=0;j<3;j++)
		{cout<<a[j][i]<<" ";}
		cout<<endl;
	}                             cout<<"\n\n";
	
					return 0;
				}
