#include<bits/stdc++.h> 
using namespace std; 
  
void find3largest(int arr[], int n) 
{ 
    sort(arr, arr + n); //It uses Tuned Quicksort with  
                    //avg. case Time complexity = O(nLogn) 
          
    int check = 0, count = 1; 
          
    for(int i = 1; i <= n; i++) 
    { 
              
        if(count<4) 
        { 
            if(check != arr[n - i])  
            {  
                // to handle duplicate values 
                cout << arr[n - i] << " "; 
                check = arr[n - i]; 
                count++; 
            } 
        } 
        else
            break; 
    } 
} 
      
// Driver code 
int main() 
{ 
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
   	int n;
   	cin>>n;
   	int arr[n];
   	for(int j=0;j<n;j++)
   	cin>>arr[j];
   	 find3largest(arr, n);
   	 
   }
  
   return 0;
} 
