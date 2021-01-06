// C++ code to demonstrate star pattern 
#include <iostream> 
using namespace std; 

// Function to demonstrate printing pattern 
void pypart2(int n) 
{ int num=65;
char ch=char(num);
	// Number of spaces 
	int i, j, k = n; 

	// Outer loop to handle number of rows 
	// n in this case 
	for (i = 1; i <= n; i++) { 

		// Inner loop for columns 
		for (j = 1; j <= n; j++) { 

			// Condition to print star pattern 
			if (j >= k) {
				cout << ch<<" "; 
				num=num+1;}
			else
				cout << ch<<" "; 
					num=num+1;
		} 
	
		k--; 
		
		cout << "\n"; 
	} 
} 

// Driver Function 
int main() 
{ 
	int n = 5; 
	pypart2(n); 
	return 0; 
} 

