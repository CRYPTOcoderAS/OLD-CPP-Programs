#include <cstdlib>
#include <iostream>
#include<conio.h> 
#include<process.h>
using namespace std; 
int Pop(int[],int &); 
int Push(int[],int&,int); 
void display(int[],int); 
const int size = 50; 
int
main() 
{ 
int Stack[size],item,top=-1,res; 
char ch='y'; 
 
while(ch=='y'||ch=='Y') 
{ 
 cout<<"\nEnter item for insertion:"; 
cin>>item; 
res = Push(Stack,top,item); 
if(res==-1) 
{ 
cout<<"OVERFLOW!!!...Aborting!!"; 
exit(1); 
} 
cout<<"\nThe Stack now is:\n"; 
display(Stack,top); 
cout<<"\nWant to insert more elements(y/n):"; 
cin>>ch; 
} 
cout<<"\nNow deletion of elements begins..."; 
ch='y'; 
while(ch=='y'||ch=='Y') 
{ 
res=Pop(Stack,top); 
if(res==-1) 
{ 
cout<<"UNDERFLOW!!! Aborting...."; 
exit(1); 
} 
else 
{ 
cout<<"\nElement deleted is "<<res<<endl; 

 
cout<<"\nThe Stack now is:\n"; 
display(Stack,top); 
} 
cout<<"\nWant to delete more elements?(y/n)..."; 
cin>>ch; 
} 
} 
 
int Push(int Stack[], int & top, int ele) 
{ 
if(top==size-1) 
return -1; 
else 
{ 
top++; 
Stack[top]=ele; 
} 
return 0; 
} 
int Pop(int Stack[],int & top) 
{ 
int ret; 
if(top==-1) 
return -1; 
else 
{ 
ret = Stack[top]; 
top--; 
} 
return ret; 
} 
void display(int Stack[], int top) 
{ 
if(top==-1) return ; 
cout<<Stack[top]<<"<<= "<<endl; 
for(int i=top-1;i>=0;i--) 
cout<<Stack[i]<<endl; 
}


