#include<iostream>
#include<iomanip>
using namespace std ;    
int weekday ( int year, int month, int day)
 {int res= 
    +((153*(month+12*((14-month)/12)-3)+2)/5)
    +(365*(year+4800-((14-month)/12)))
    +((year+4800-((14-month)/12))/4)
    -((year+4800-((14-month)/12))/100)
    +((year+4800-((14-month)/12))/400)
    -32045 ;
    
}

int main ()
{
int rst;
const char *names[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int a,month,year,y,day,m,d;
    std::cout<<"enter month :" ;
    std::cin>>month;
    std::cout<<"enter date : " ;
    std::cin>>day;
    std::cout<<" enter year : " ;
    std::cin>>year ;

    
    std::cout<<"falls on : "<<rst; 
  cin.get() ;
     return 0 ;
}

