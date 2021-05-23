#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(){
	int n,*arr;
	int max,min;
	int cmax=0,cmin=0;
	cout<<" enter a number" ;
	cin>>n;
arr=new int[n];
cout<<"\n enter the array " ;
for(int i=0;i<n;i++)
{
	cin>>arr[i];
}
max=arr[0];
min=arr[0];
for(int i=1;i<n;i++)
{
	if(arr[i]<min)
	{
		min=arr[i];
		cmin++;
	}
	if(arr[i]>max)
	{
		max=arr[i];
		cmax++;
	}
}
cout<<"\n\n" ;
cout<<" numbers of times highest score increased :"<<cmax;
cout<<"\nnumbers of times (lowest) score decreased: "<<cmin;
return 0;
}
	
