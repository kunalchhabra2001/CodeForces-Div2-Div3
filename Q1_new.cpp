#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m;
		cin >> n >> m;
		int num = n*m;
		if(num%2==0)cout << num/2 << endl;
		else cout << num/2 + 1 << endl;

	}

}