#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void c()
 {       
  cout<<"Concept of Class\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n An object is something that has an indentity,a state and behaviour.\n";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      { case 1:
             
        c(); break; } break; }
   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\nFor operating with class member\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      { case 1:
             
        c(); break; } break; }

    case 3:
     {       
      cout<<"General Format:\n";
      cout<<"class class-name\n {\n ....\n ....\n }object-name;\n";
      cout<<"1.Back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
           
      c(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<" class p\n {\n  int age;\n  float weight,hight;\n public:\n  void get_age(void)\n"
      <<"   { age=10; }\n  void print_age(void)\n   { cout<<age; }\n };\nint main(void)"
      <<"\n {\n        \n  p A,B;\n  A.get_age();\n  B.get_age();\n  A.print_age();"
      <<"\n  B.print_age();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a;
      cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output=10 10\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               
       c(); break; } break; }
       case 2:
      {        
        c(); break; } } break; }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans:\n We can declare more than one object in one statement\n";
      cout<<"1.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            c(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans:\nnothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            c(); break; } break; }

    case 7:
     exit(0); } }



void o()
 {       
  cout<<"Concept of Object\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n A class is a way to bind the data and its associated functions together\n";
     cout<<" 1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           
       o(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For capturing the common structure and common behaviour of a set of object\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
          
     o(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" class class_name\n {\n  private:\n    variable declaration;\n    function declaration;"
       <<"\n  public:\n    variable declaration;\n    function declaration;\n };\n";
      cout<<" 1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            
    o(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class p\n {\n  int age;\n  float weight,hight;\n public:\n  void get_age(void)\n"
      <<"   { age=85; }\n  void print_age(void)\n   { cout<<age; }\n };\nint main(void)"
      <<"\n {\n        \n  p A,B;\n  A.get_age();\n  B.get_age();\n  A.print_age();"
      <<"\n  B.print_age();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a;
      cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output=85 85\n";
     cout<<" 1.back\n";
     int a;
     cin>>a;
     switch(a)
      {
       case 1:
               
       o(); break; } break; }
     case 2:
      {
              
        o(); break; } } break; }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans:\n Can bind data and its associated functions together\n";
      cout<<" 1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            
    o(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Nothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
           
      o(); break; } break; }

    case 7:
     exit(0); } }


void t1()
 {       
  cout<<"Concept of Class and Object\n";
  cout<<" 1.Concept of Class\n 2.Concept of Object\n 3.Exit\n 4.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { c(); t1(); break; }
    case 2:
     { o(); t1(); break; }
    case 3:
     exit(0); }
 }


void s1()
 {       
  cout<<"Concept of Abstruction:\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n Abstruction refers to the act of representing essential features "
     <<"without\n including the background details or explanations\n";
     cout<<" 1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
          
     s1(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For representing essential features without including background details\n";
     cout<<" 1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
          
     s1(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            
    s1(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<" 1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s1(); break; } break; }
     case 2:
      {
              s1(); break;  } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans:\n classes use the concept of abstruction\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s1(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s1(); break; } break; }

    case 7:
     exit(0); }
    }



void s2()
 {       
  cout<<"Concept of Encapsulation\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n The binding of variables and functions into single class-type variable "
     <<"is\n referred to as Encapsulation\n";
     cout<<" 1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s2(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For binding data and function into a single unit\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s2(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n class class_name\n {\n  int a;\n  float s;\n };\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s2(); break; } break; }

    case 4:
     {
            
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<" 1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s2(); break; } break; }
     case 2:
      {        s2(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n Only those functions which are binded in the class can access not \n"
      <<"accessiable data to the outside world\n";
      cout<<" 1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s2(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n";
      cout<<" 1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s2(); break; } break; }

    case 7:
     exit(0); }
    }



void s3()
 {       
  cout<<"Concept of Dynamic Binding\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n Dynamic binding means that the code associated with agiven procedure call"
      <<"\n is not known until the time of the call at run time\n";
     cout<<" 1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s3(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For late binding\n";
     cout<<" 1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s3(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"no general format\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s3(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s3(); break; } break; }
     case 2:
      {        s3(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\nnothing";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s3(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s3(); break; } break; }

    case 7:
     exit(0); }
    }



void s4()
 {       
  cout<<"Concept of Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n It is the process by which objects of one class acquire the propertise of"
      <<"\n objects of another class\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s4(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n We can add additional features to an existing class without modifying it\n";
     cout<<" 1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s4(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" class Derieved class_name:access specifier Base class_name\n {\n     class"
      <<" definition\n };\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s4(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s4(); break; } break; }
     case 2:
      {        s4(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n Inheritance provides the idea of reusability\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s4(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
             s4(); break; } break; }

    case 7:
     exit(0); }
    }


void t2()
 {       
  cout<<"Features of OOP:\n 1.Abstraction\n 2.Encapsulation\n 3.Dynamic";
  cout<<" Binding\n 4.Inheritance\n 5.Exit\n 6.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s1(); t2(); break; }
    case 2:
     { s2(); t2(); break; }
    case 3:
     { s3(); t2(); break; }
    case 4:
     { s4(); t2(); break; }
    case 5:
     exit(0); }
   }


void s5()
 {       
  cout<<"Concept of Variable\n";
   cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
          s5(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s5(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s5(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s5(); break; } break; }
     case 2:
      {        s5(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s5(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s5(); break; } break; }

    case 7:
     exit(0); }
    }



void s6()
 {       
  cout<<"Concept of Function\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s6(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s6(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s6(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s6(); break; } break; }
     case 2:
      {        s6(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s6(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s6(); break; } break; }

    case 7:
     exit(0); }
    }



void t3()
 {       
  cout<<"Concept of Member Variables and Functions:\n";
  cout<<" 1.Member variables\n 2.Member functions\n 3.Exit\n 4.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s5(); t3(); break; }
    case 2:
     { s6(); t3(); break; }
    case 3:
      exit(0); }
   }


void t4()
 {       
  cout<<"Concept of Function Overloading\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n Function Overloading means use of some functions for different purpose\n";
     cout<<"1.Back:\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
          t4(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n For using some function for different purpose\n";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t4(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"No General Format\n";
      cout<<"1.Back:\n";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t4(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<" int add(int a,int b)\n {\n  int c;\n  c=a+b;\n  return c;\n }\n";
      cout<<" float add(float x,float y)\n {\n  float z;\n  z=x+y;\n  return z;\n }\n";
      cout<<" void main(void)\n {\n  int p=3,q=4;\n  cout<<add(p,q);\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output: 7\n";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t4(); break; } break; }
     case 2:
      {
              t4(); break; }
      }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<" Can use functions for different purpose\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t4(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<" We should not overload unrelated functions\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t4(); break; } break; }

    case 7:
     exit(0); }
    }



void t5()
 {       
  cout<<"Concept of Default Parameter\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n When a function assigns a default value to the parameter when the function ";
     cout<<"is\n declared the argument is called Default argument\n";
     cout<<"1.Back:\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t5(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n Default argument are used when some arguments always have the same value\n";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t5(); break; } break; }

    case 3:
     {       
      cout<<"General Format:\n";
      cout<<" int mul(int i=5,int j=8);\n";
      cout<<"1.Back:\n";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t5(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<"\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t5(); break; } break; }
     case 2:
      {        t5(); break; } } break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<" a.Default arguments can be used to add new parameters to the existing functions\n";
      cout<<" b.Default arguments can be used to combine similar function into one\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t5(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Nothing\n";
      cout<<"1.Back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t5(); break;} break; }

    case 7:
     exit(0); }
    }



void t6()
 {       
  cout<<"Concept of Passing and Returning Object\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n When a object is passed to afunction then a copy of object or only"
     <<" address of\n an object is transfer to function and return object to another"
     <<" function\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t6(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t6(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1. back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t6(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class l{\n  int x;\n public:\n  l(int a){x=a;}\n  int getx(){return x;}\n };\n"
      <<" int add(l X,l Y){\n  int x,y;\n  x=X.getx()+1;\n  y=Y.getx()+1;\n  return x+y;"
      <<"\n }\nvoid main(void)\n {\n  l P(5),Q(10);\n  cout<<P.getx()+1;\n  cout<<Q."
      <<"getx()+1;\n  cout<<add(P,Q);\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output=17\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t6(); break; } break; }
     case 2:
      {        t6(); break; } }
      break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
             t6(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t6(); break; } break; }

    case 7:
     exit(0); }
    }



void t7()
 {       
  cout<<"Concept of Constructors and Destructors\n";
   cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n Constructor:\n  A constructor is a member function whose task is to initialize ";
     cout<<"the object of\n  its class.\n Destructor:\n  It use to destroy the object that have ";
     cout<<"been created by a constructor\n";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t7(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n a.Constructor is used for initialize the object of its class\n";
     cout<<" b.Destructor destroy an object that have been created by a constructor\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t7(); break; } break; }

    case 3:
     {       
      cout<<"General Format:\n";
      cout<<" Constructor\n  class_name(argument list){   function definition;}\n";
      cout<<" Destructor\n  ~class_name(argument list){   function definition;}\n";
      cout<<"1.Back\n";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t7(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<" class B{\n  int i;\n public:\n  B(){cout<<B class constructor;}\n  ~B(){";
      cout<<"cout<<B class destructor;}\n };\nclass D:public B{\n  int j;\n public:\n  ";
      cout<<"D(){cout<<D class constructor;}\n };\n void main()\n {\n  B x;\n D y;\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n B class constructor\n B class destructor\n D class constructor\n ";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t7(); break; } break; }
     case 2:
      {
              t7(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality:\n";
      cout<<" Constructor:\n  a.automatically call\n  b.can have default argument\n  c.implicit ";
      cout<<"calls to the operators new and delet\n Destructor:\n  a.automatically call\n  b.";
      cout<<"class name & destructor name same\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t7(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks:\n";
      cout<<" a.Constructor is called when object created\n b.Destructor is called when a scope ";
      cout<<"of a object is ended\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t7(); break; } break; }

    case 7:
     exit(0); }
    }


 void t8()
 {       
  cout<<"Concept of Friend Function\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n The function that are declared with the keyword friend are known as friend\n";
     cout<<" function\n";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t8(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n 1> Operator Overloading\n 2> Make the creation of some I/r functions ";
     cout<<"easier(templete)\n 3> Two or more class objects interacts each other\n";
     cout<<"1.Back:\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t8(); break; } break; }

    case 3:
     {       
      cout<<"General Format:\n";
      cout<<" class class_name\n {\n .....\n .....\n  public:\n  friend return-type";
      cout<<" function_name(argument list);\n }\n";
      cout<<"1.Back\n";
      int x; cin>>x;
      switch(x)
       {
    case 1:
             t8(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<"class c\n {\n int x;\n int y;\n puplic:\n c(){}\nc(int real,int img){x=real;y=img;}\n";
      cout<<" void print(){cout<<x+iy;}\n friend c add(c,c);\n };\n";
      cout<<"c add(c X,c Y)\n {\n c Z;\n Z.x=X.x+Y.x;\n Z.y=X.y+Y.y;\n return Z; }\n";
      cout<<"void main(void)\n {\n c P(2,3),Q(3,4),R;\n R=add(P,Q);\n R.print(); }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:\n5+i7\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t8(); break; } break; }
     case 2:
      {        t8(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality:\n";
      cout<<"Ans:\n a.Can access private data of classes\n b.Can be declared in any ";
      cout<<"number of class\n";
      cout<<"1.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t8(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans:\n Nothing\n";
      cout<<"1.Back:\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t8(); break; } break; }

    case 7:
     exit(0); }
    }


 void t9()
 {       
  cout<<"Concept of Friend Class\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n The class whose all functions are friend functions,is called friend class\n ";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t9(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n To make all function friendly to the class\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t9();break; } break; }

    case 3:
     {       
      cout<<"General Format:\n";
      cout<<" friend class class_name;\n";
      cout<<"1.Back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t9(); break; } break; }

    case 4:
     {       
      cout<<"Example:\n";
      cout<<" class X {  int x;\n  public:\n   X(){}\n   X(int a){x=a;}\n   friend class A; };\n";
      cout<<" class A {  int a;\n  public:\n   A(){}\n   A(int p){a=p;}\n   void add(X);\n  ";
      cout<<" void sub(X); };\n void A::add(X a)\n  { cout<<a.x+a; }\n void A::sub(X b)\n  { cout<<b.x-a; }";
      cout<<"\n void main(void)\n  { X p(10);\n A q(5);\n q.add(p);\n q.sub(p); }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:\n 15\n 5\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t9(); break; } break; }
     case 2:
      {        t9(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality;\n";
      cout<<" Can shared a class dy another class\n ";
      cout<<"1.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t9(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<" Nothing\n";
      cout<<"1.Back:";
      int a;
      cin>>a;
      switch(a)
       {
    case 1:
            t9(); break; } break; }

    case 7:
     exit(0); }
    }


void s7()
 {       
  cout<<"Concept of Pointer to member\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s7(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1. back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s7(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s7(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s7(); break; } break; }
     case 2:
      {        s7(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s7(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s7(); break; } break; }

    case 7:
     exit(0); }
    }


void s8()
 {       
  cout<<"Concept of Pointer to Object\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s8(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s8(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s8(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s8(); break; } break; }
     case 2:
      {        s8(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s8(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s8(); break; } break; }

    case 7:
     exit(0); }
    }




void t10()
 {       
  cout<<"Pointer to member and Pointer to Object:\n 1.Pointer to member\n";
  cout<<" 2.Pointer to Object\n 3.Exit\n 4.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s7(); t10(); break; }
    case 2:
     { s8(); t10(); break; }
    case 3:
      exit(0);
   }
 }



void t11()
 {       
  cout<<"Concept of this pointer\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n this represent an object that calls a member function\n ";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t11(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For storing address of an object\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t11(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" return *this;\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t11(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class X\n {\n  int x,y;\n public:\n  X(){}\n  X(inta,intb){x=a;y=b}\n"
      <<"  void print(){cout<<x<<y;}\n  int add();\n };\nint X::add()\n {\n  return "
      <<"*this.x+*this.y;\n }\n void main(void)\n {\n  X A(5,10);\n  cout<<A.add();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:15\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t11(); break; } break; }
     case 2:
      {        t11(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n a.this pointer is an implicit pointer\n b.Can call more functions by "
      <<"an object\n ";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t11(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n ";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t11(); break; } break; }

    case 7:
     exit(0); }
    }



void s9()
 {       
  cout<<"Concept of Operator Overloading Using member function\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s9(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s9(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s9(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class c{\n  int x,y;\n public:\n  c(){x=0;y=0;}\n  c(int a,int b){x=a;y=b;}\n"
      <<"  c operator-(c ob2);\n void print(){cout<<x<<y;\n };\nc c::operator-(c ob2)"
      <<"\n {\n  c t;\n  t.x=x-ob2.x;\n  t.y=y-ob2.y;\n  return t;\n }\nvoid main(void)"
      <<"\n {\n  c o1(10,20),o2(3,5),o3;\n  o3=o1-o2;\n  o3.print();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:7 15\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s9(); break; } break; }
     case 2:
      {        s9(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s9(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s9(); break; } break; }

    case 7:
     exit(0); }
    }



 void s10()
 {       
  cout<<"Concept of Operator Overloading Using friend function\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s10(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s10(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s10(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class c{\n  int x,y;\n public:\n  c(){x=y=0;}\n  c(int a,int b){x=a;y=b}\n  "
      <<"friend c operator+(c ob1,c ob2)\n  void print(){cout<<x<<y;}\n };\n"
      <<"c operator +(c ob1,c ob2)\n {\n  c t;\n  t.x=ob1.x+ob2.x;\n  t.y=ob1.y+ob2.y;\n"
      <<"  return t;\n };\nvoid main(void)\n {\n  c o1(3,6),o2(1,4),o3;\n  o3=o1+o2;\n"
      <<"  o3.print();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:4 10\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s10(); break; } break; }
     case 2:
      {
              s10(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s10(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s10(); break; } break; }

    case 7:
     exit(0);}
    }



void t12()
 {       
  cout<<"Operator Overloading:\n 1.Using member function\n 2.Using friend";
  cout<<" function\n 3.Exit\n 4.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s9(); t12(); break; }
    case 2:
     { s10(); t12(); break; }
    case 3:
       exit(0);
    }
  }



void t13()
 {       
  cout<<"Concept of Type convertion\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n Type convertion means automatically convert different variables as per\n"
     <<"certain rules\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t13(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n For converting deferent types of variables\n ";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t13(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" int v1;\n float v2;\n v1=v2;\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t13(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<" class t\n {\n int m,s;\n public:\n  t(){}\n  t(int p){m=p/60;s=p%60;}\n  "
      <<"void print(){cout<<m<<s;}\n };\nvoid main(void)\n {\n  int x=75;\n  t o1;\n"
      <<"  o1=x;\n  o1.print();\n }\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:1 15\n";
     cout<<"1. back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t13(); break; } break; }
     case 2:
      {        t13(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<" can convert->\n  a.basic type to user define type\n  b.user define to basic"
      <<" type\n  c.user define to another user define type\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t13(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"nothing\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t13(); break; } break; }

    case 7:
     exit(0); }
    }


 void t14()
 {       
  cout<<"Concept of Dynamic Allocation of Object\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t14(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"Enter 1 for back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t14(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t14(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\nclass array\n\
{                             \n\
char *name;                   \n\
char *roll;                      \n\
public:                             \n\
array(){}                              \n\
array(char a[],char b[])      \n\
{                                \n\
name=new char[strlen(a)+1];         \n\
roll=new char[strlen(b)+1];            \n\
name=a;                                   \n\
roll=b;                    \n\
}                         \n\
void print(){cout<<name<<\"   \"<<roll;}\n\
~array()                         \n\
{                              \n\
delete[] name;                    \n\
delete[] roll;                       \n\
}                                       \n\
};                                         \n\
void main(void)                   \n\
{                              \n\
                               \n\
array *a;                        \n\
a=new array(\"A\",\"fun\") ;            \n\
a->print();                           \n\
delete a;                                \n\
getch();                                  \n\
}                                          ";

      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output=A fun\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t14(); break; } break; }
     case 2:
      {        t14(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans\n";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t14(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
              t14(); break; } break; }

    case 7:
     exit(0); }
    }



void s11()
 {       
  cout<<"Concept of Reference as parameter\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s11(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s11(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s11(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s11(); break; } break; }
     case 2:
      {
              s11(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s11(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s11(); break; } break; }

    case 7:
     exit(0); }
    }


void s12()
 {       
  cout<<"Concept of Reference as return value\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s12(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s12(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s12(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s12(); break; } break; }
     case 2:
      {        s12(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s12(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s12(); break; } break; }

    case 7:
     exit(0); }
    }



void s13()
 {       
  cout<<"Concept of Reference as independent reference\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s13(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"Enter 1 for back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s13(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s13(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s13(); break; } break; }
     case 2:
      {        s13(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s13(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s13(); break; } break; }

    case 7:
     exit(0); }
    }



void t15()
 {       
  cout<<"References:\n 1.As parameter\n 2.As return value\n 3.As independent";
  cout<<" reference\n 4.Exit\n 5.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s11(); t15(); break; }
    case 2:
     { s12(); t15(); break; }
    case 3:
     { s13(); t15(); break; }
    case 4:
      exit(0);
   }
 }


void t16()
 {       
  cout<<"Concept of Copy Constructor\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans:\n Copy constructor declares and initializes an object from another object\n";
     cout<<"1.Back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t16(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans:\n is used to declare and initialize an object from another object\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t16(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" integer ob1(ob2);\n";
      cout<<"1.Back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t16(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output:\n";
     cout<<"1.Back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t16(); break; } break; }
     case 2:
      {        t16(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality:\n";
      cout<<" When no copy constructor is define,the compiler supplies its own copy\n constructor\n";
      cout<<"1.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t16(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<" Nothing\n";
      cout<<"1.Back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t16(); break; } break; }

    case 7:
     exit(0); }
    }



void s14()
 {       
  cout<<"Concept of Single Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s14(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s14(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1. back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s14(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s14(); break; } break; }
     case 2:
      {        s14(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s14(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s14(); break; } break; }

    case 7:
     exit(0); }
    }



void s15()
 {       
  cout<<"Concept of Multiple Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s15(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s15(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s15(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s15(); break; } break; }
     case 2:
      {        s15(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s15(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s15(); break; } break; }

    case 7:
     exit(0); }
    }




void s16()
 {       
  cout<<"Concept of Multilevel Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s16(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s16(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s16(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s16(); break; } break; }
     case 2:
      {        s16(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s16(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s16(); break; } break; }

    case 7:
     exit(0); }
    }





void s17()
 {       
  cout<<"Concept of Hierarchical Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s17(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s17(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s17(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"Enter 1 for back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s17(); break; } break; }
     case 2:
      {        s17(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s17(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s17(); break; } break; }

    case 7:
     exit(0); }
    }



void s18()
 {       
  cout<<"Concept of Hybrid Inheritance\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           s18(); break; } break; }

   case 2:
    {       
     cout<<"Why used?\n";
     cout<<"Ans\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           s18(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<"Ans\n";
      cout<<"1.back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            s18(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n";
      cout<<"Choise:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               s18(); break; } break; }
     case 2:
      {        s18(); break; } }
     break;
    }


    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s18(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            s18(); break; } break; }

    case 7:
     exit(0); }
    }




void t17()
 {       
  cout<<"Inheritance:\n 1.Single Inheritance\n 2.Multiple Inheritance\n";
  cout<<" 3.Multilevel Inheritance\n 4.Hierarchical Inheritance\n";
  cout<<" 5.Hybrid Inheritance\n 6.Exit\n 7.Back\nChoice:";
  int a; cin>>a;
  switch(a)
   {
    case 1:
     { s14(); t17(); break; }
    case 2:
     { s15(); t17(); break; }
    case 3:
     { s16(); t17(); break; }
    case 4:
     { s17(); t17(); break; }
    case 5:
     { s18(); t17(); break; }
    case 6:
      exit(0);
   }
 }



void t18()
 {       
  cout<<"Concept of Virtual Base class\n";
  cout<<" 1.What is it?\n 2.Why used?\n 3.Genaral format\n 4.Example\n";
  cout<<" 5.Speciality\n 6.Drawbacks\n 7.Exiting\n 8.Back\n";
  cout<<"Choise:";
  int x; cin>>x;
 switch(x)
  {
   case 1:
    {       
     cout<<"What is it?\n";
     cout<<"Ans\n The duplication of inherited members can be avoid by making common base"
      <<" class\n as virtual base class\n";
     cout<<"1.back\n";
     int y; cin>>y;
     switch(y)
      {
       case 1:
           t18(); break; } break; }

   case 2:
    {      
     cout<<"Why used?\n";
     cout<<"Ans\n For avoiding ambiguity error\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
           t18(); break; } break; }

    case 3:
     {       
      cout<<"General Format\n";
      cout<<" class A{}:\n class B:virtual access specifier A{};\n";
      cout<<"1. back";
      int x; cin>>x;
      switch(x)
       {
    case 1:
            t18(); break; } break; }

    case 4:
     {       
      cout<<"Example\n";
      cout<<"Ans\n class v1\n\n";
      cout<<" {  char *a;\n public:\n";
      cout<<"Choice:\n";
      cout<<" 1.Run\n 2.Back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
     {       
     cout<<"Output=Animesh\n";
     cout<<"1.back\n";
     int a; cin>>a;
     switch(a)
      {
       case 1:
               t18(); break; } break; }
     case 2:
      {
              t18(); break; } }
     break;
    }

           break;
    case 5:
     {       
      cout<<"Speciality\n";
      cout<<"Ans";
      cout<<"1.back\n";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t18(); break; } break; }

    case 6:
     {       
      cout<<"Drawbacks\n";
      cout<<"Ans\n";
      cout<<"1.back:";
      int a; cin>>a;
      switch(a)
       {
    case 1:
            t18(); break; } break; }

    case 7:
     exit(0); }
    }



   
   void san(){
        
  cout<<"Topics of interest:=>\n 1.Concept of Class and Object \n 2.Features of OOP\n";
  cout<<" 3.Private public and Protected member\n 4.Function Overloading\n 5.Default Parameter\n";
  cout<<" 6.Passing and returning Objects\n 7.Constructors and Destructors\n 8.Friend Function\n";
  cout<<" 9.Friend Class\n 10.Pointer to member and pointer to Object\n 11.this pointer\n";
  cout<<" 12.Operator Overloading\n 13.Type Conversion(Manual type conversion)\n";
  cout<<" 14.Dynamic Allocation of Objects\n 15.Reference\n 16.Copy Constructor\n";
  cout<<" 17.Inheritance\n 18.Virtual Base class\n 19.Exiting from Topic"<<endl;
  cout<<"Topic Choise:";
 int a;
 cin>>a;
 switch(a)
  {
   case 1:
    {        t1(); san();break; }
   case 2:
    { t2(); san();break; }
   case 3:
    { t3(); san(); break; }
   case 4:
    { t4(); san(); break; }
   case 5:
    { t5(); san(); break; }
   case 6:
    { t6(); san(); break; }
   case 7:
    { t7(); san(); break; }
   case 8:
    { t8(); san(); break; }
   case 9:
    { t9(); san(); break; }
   case 10:
    { t10(); san(); break; }
   case 11:
    { t11(); san(); break; }
   case 12:
    { t12(); san(); break; }
   case 13:
    { t13(); san(); break; }
   case 14:
    { t14(); san(); break; }
   case 15:
    { t15(); san(); break; }
   case 16:
    { t16(); san(); break; }
   case 17:
    { t17(); san(); break; }
   case 18:
    { t18(); san(); break; }
   case 19:
     exit(0); break;}
   }
   
   int main()
   {
    san();
    return 0;
   }
  


