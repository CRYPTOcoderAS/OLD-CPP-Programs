#include <iostream>
using namespace std;
main()
{
int n;
cout << (n = 4) << endl;
cout << (n == 4) << endl;
cout << (n > 3) << endl;
cout << (n < 4) << endl;
cout << (n = 0) << endl;
cout << (n == 0) << endl;
cout << (n > 0) << endl;
cout << (n && 4) << endl;
cout << (n || 4) << endl;
cout << (!n) << endl;
return 0;
}
