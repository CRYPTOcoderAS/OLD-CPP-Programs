#include<bits/stdc++.h>
			using namespace std;
class bank
{
      private :
              char name[30] ;
              char accname[20] ;
              char type[20];
              int ibalance ;
              int dop ;
              int with ;
              
      public :
             void menu(void) ;
             void get(void) ;
             void deposite (void) ;
             void check (void);
             void withdraw (void) ;
             void info (void);
             };
      void bank::menu()
      {
           
      int me ;
      std::cout<<"choose from 1-6 " ;
      std::cout<<"\n1.create new account " ;
      std::cout<<"\n2.deposite your money " ;
      std::cout<<"\n3.chech your balance " ;
      std::cout<<"\n4.withdraw amount" ;
      std::cout<<"\n5. account info " ;
      std::cout<<"\n6. exit " ;
      std::cin>>me ;
      switch (me) 
      {
             case 1 :
                  get();
                  break;
             case 2 :
                  deposite() ;
                  break;
                  case 3 :
                       check();
                       break;
                   
             case 4 :
                       withdraw() ;
                       break ;
                  case 5 :
                       info() ;
                       break;
             default :
                     std::cout<<"chosse any one " ;
                     }
                     }
      void bank :: get()
      {
           int go ;
      std::cout<<" enter your name " ;
      std::cin>>name ;
      std::cout<<"\n accout name " ;
      std::cin>>accname;
      std::cout<<"\n type of account " ;
      std::cin>>type ;
      std::cout<<" money you want to deposit " ;
      std::cin>>ibalance ;
{
      menu () ;
      }
}
void bank::deposite()
{
     int go ;
     std::cout<<"\n how much money you want o deposit" ;
     std::cin>>dop;
     dop+=ibalance ;
     std::cout<<" press 0 to go to main menu " ;;
     std::cin>>go ;
     if(go==0)
     { menu() ;
     }
   }
     void bank::check(){
     int go ;
     std::cout<<"\n your current balance" <<dop ;
     std::cout<<"\n press 0 to go to main menu " ;
     std::cin>>go ;
     if(go==0)
     {menu() ;
     }
   }
void bank::withdraw ()
{int go ;
std::cout<<"\nhow much money u want to withdraw " ;
std::cin>>with;
dop-=with;
std::cout<<"\n after withdraw your balance "<<dop ;
std::cout<<"\n press 0 to go to main menu " ;
     std::cin>>go ;
     if(go==0)
     {menu() ;
     }
}
void bank ::info()
{ int go ;
std::cout<<"\n name of depositer "<<name;
std::cout<<"\nname of account " <<accname ;
std::cout<<"\n type of account "<<type ;
std::cout<<"\nnamount in your account "<<dop ;
std::cout<<"\n press 0 to go to main menu " ;
     std::cin>>go ;
     if(go==0)
     {menu() ;
     }
     }
     int main () 
     {
         bank obj ;
         obj.menu();
         //getch();
         return 0;
         }             
