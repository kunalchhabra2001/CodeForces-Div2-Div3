#include <bits/stdc++.h> 
using namespace std; 
  
// Function to find the diagonal 
// of the octagon 
float octadiagonal(float a) 
{ 
  
    // side cannot be negative 
    if (a < 0) 
        return -1; 
  
    // diagonal of the octagon 
    return a * sqrt(4 + (2 * sqrt(2))); 
} 
  
// Driver code 
int main() 
{ 
    float a;
    cin >> a; 
    cout << octadiagonal(a) << endl; 
  
    return 0; 
} 