#include<bits/stdc++.h>
using namespace std;
#define int long long

int smallestDivisor(int n) 
{ 
    // if divisible by 2 
    if (n % 2 == 0) 
        return 2; 
  
    // iterate from 3 to sqrt(n) 
    for (int i = 3; i * i <= n; i += 2) { 
        if (n % i == 0) 
            return i; 
    } 
  
    return n; 
} 
signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k;
		cin >> n >> k;
		if(n%2==0){
			cout << n + 2*k << endl;
		}
		else{
			int ans1 = smallestDivisor(n);
			cout << n+ans1+(k-1)*2 << endl;
		}



	}




}
