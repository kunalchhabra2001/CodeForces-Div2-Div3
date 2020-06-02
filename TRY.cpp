#include <iostream> 
using namespace std;

#define int unsigned long long 
  
int numberOfPaths(int m, int n) 
{ 
    // We have to calculate m+n-2 C n-1 here 
    // which will be (m+n-2)! / (n-1)! (m-1)! 
    int path = 1; 
    for (int i = n; i < (m + n - 1); i++) { 
        path *= i; 
        path /= (i - n + 1); 
    } 
    return path; 
} 
  
// Driver code 
signed main() 
{ 
    int m,n;
    cin >> m >> n;
    cout << numberOfPaths(m, n) << endl; 
    return 0; 
} 