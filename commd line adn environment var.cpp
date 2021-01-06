#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
int main(int argc,char **argv, char **envp)
{
	 int i;
	 cout<<" argument count = "<<argc;
	 cout<<"\n program name : "<<argv[0];
	 cout<<" \n argument vectors : ";
	 for(i=0;i<=argc;i++)
	 cout<<argv[i]<<"\n";
	 cout<<"\n environment variables are : "<<endl;
	 i=0;
	 while(*envp[i])
	 cout<<envp[i++]<<endl;
	 return 0;
}



