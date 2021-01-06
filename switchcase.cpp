#include <iostream>
using namespace std;

int main() 
{ 
    int i = -1; 
    switch (i) 
    { 
        case '0': cout << "Geeks"; 
                break; 
        case '1': cout << "Quiz"; 
                break; 
        default: cout << "GeeksQuiz"; 
    } 
    return 0; 
    /*At first look, the output of the program seems to be Geeks.
	 But, the cases are labeled with characters which gets converted
	  to their ascii values 48(for 0) and 49(for 1).
	   None of the cases is labeled with value 0.
	    So, the control goes to the default block and GeeksQuiz is printed.*/
}  
