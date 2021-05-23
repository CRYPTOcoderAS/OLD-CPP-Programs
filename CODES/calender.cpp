#include<iostream>
#include<iomanip>
using namespace std ;
int weekday(int yy, int mm, int dd) 
{
    int rst=dd 
    +((153*(mm+12*((14-mm)/12)-3)+2)/5)
    +(365*(yy+4800-((14-mm)/12)))
    +((yy+4800-((14-mm)/12))/4)
    -((yy+4800-((14-mm)/12))/100)
    +((yy+4800-((14-mm)/12))/400)
    -32045 ;
    return (rst+1)%7 ;
}
int main ()
{               int dd,mm,yy;
    const char *names[]={"sunday","monday","tuesday","wednesday","thursday","friday","saturday"};
    int day = 0 ;
    day=weekday(yy,dd,mm);
    std::cout<<"day = " <<names[day];
    cin.get() ;
    return 0 ;
}
