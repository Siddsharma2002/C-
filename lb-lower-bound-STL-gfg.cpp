// CPP program to illustrate 
// std :: lower_bound 
#include <bits/stdc++.h> 
using namespace std;
// Driver code 
int main() 
{ 
	// Input vector 
	vector<int> v{ 10, 20, 30, 30, 30, 40, 50 }; 



	vector<int>::iterator low1, low2, low3;
	
	// std :: lower_bound 
	low1 = lower_bound(v.begin(), v.end(), 30); 
	low2 = lower_bound(v.begin(), v.end(), 35); 
	low3 = lower_bound(v.begin(), v.end(), 55); 

	// Printing the lower bounds 
	 
		cout<< "\nlower_bound for element 30 at position : "
		<< (low1 - v.begin()); 
	 
		cout<< "\nlower_bound for element 35 at position : "
		<< (low2 - v.begin()); 
	 
		cout<< "\nlower_bound for element 55 at position : "
		<< (low3 - v.begin()); 

	return 0; 
} 
