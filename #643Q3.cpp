#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		unsigned int ans = 0;
		int i = n/2;
		int ans1 = 2*i*(i+1);
		unsigned int ans2 = 2*i*(i+1)*(2*i+1)/3;
		unsigned int ans3 = ans2-ans1;
		ans = ans1 + ans2 + ans3;
		cout << ans << endl;
			

	}

}