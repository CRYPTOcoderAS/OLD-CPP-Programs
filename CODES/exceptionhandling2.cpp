#include<bits/stdc++.h>
#include<conio.h>
using namespace std;
class number{
	private :
		int num;
		public:
			void read()
			{
				cin>>num;}
class DIVIDE{} ;                //abstract class used in EXCEPTIONS
int div(number num2)
{
	if(num2.num==0) //check for zero divisor if yes
	throw DIVIDE();             // raise EXCEPTION
	else
	return num/num2.num;
}
};
int main()
{
	number num1,num2;
	int result;
	cout<<" ENTER num1 and num2 : ";
	num1.read();
	num2.read();
	try
	{
		cout<<"trying division opertation..... ";
		result=num1.div(num2);
		cout<<" succeeded "<<endl;
	}
	catch(number::DIVIDE) //exception handler block
	{
		cout<<" FAILED : ";
		cout<<"\n Exception : Divide by zero " ;
		return 1;
	}
	cout<<"num1/num2 = "<<result;
	return 0;
}
		
