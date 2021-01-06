   #include<bits/stdc++.h>


#include<iostream>
#include<string>
using namespace std ;
int main ()
{

const char *names[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int a,month,year,y,day,m,d;
    std::cout<<"enter month :" ;
    std::cin>>month;
    std::cout<<"enter date : " ;
    std::cin>>day;
    std::cout<<" enter year : " ;
    std::cin>>year ;
    a=(14-month)/12 ;
    y=year - a ;
    m=month+12*a-2 ;
    d=((day+y+y/4-y/100+y/400+(31*m/12))%7);
    
    
    std::cout<<"the date "<<month<<day<<year;
    std::cout<<"falls on : "; 
  cin.get() ;
     return 0 ;
     
}
