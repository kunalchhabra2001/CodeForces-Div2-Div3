#include <bits/stdc++.h> 
using namespace std; 

#define int long long
  
// Returns count of possible paths to reach cell at 
// row number m and column  number n from the topmost 
// leftmost cell (cell at 1, 1) 
  
unsigned int numberOfPaths(int m, int n) 
{ 
    // We have to calculate m+n-2 C n-1 here 
    // which will be (m+n-2)! / (n-1)! (m-1)! 
    unsigned int path = 1; 
    for (int i = n; i < (m + n - 1); i++) { 
        path *= i; 
        path /= (i - n + 1); 
    } 
    return path; 
} 
  
// Driver program to test above functions 
signed main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{
		int x1,y1,x2,y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int m = abs(x1-x2)+1;
		int n = abs(y1-y2)+1;
		cout << numberOfPaths(m,n) << endl;

	}
    return 0; 
} 