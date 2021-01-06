#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main()
{
	char ch;
	cout<<"enter text";
	cout<<endl;
	do {
		ch=getch();
		if(islower(ch))
		ch=toupper(ch);
		else
		ch=tolower(ch);
		putchar(ch);
	}
	while(ch!='.');
	cout<<"\n\n\n\n";
	
	cout<<"enter text again ";
	cout<<endl;
	do {
		ch=getch();
		if(islower(ch))
		ch=toupper(ch);
		else
		ch=tolower(ch);
		putchar(ch);
	}
	while(ch!='.');
	
	return 0;
}

