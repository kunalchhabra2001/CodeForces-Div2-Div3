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
		int arr[n+1];
		for(int i=1;i<=n;i++)cin >> arr[i];
		int f[n+1],ans=1;
		for(int i=1;i<=n;i++)f[i]=1;
		for(int i=1;i<=n;i++)
		{
			for(int j=2*i;j<=n;j += i)
				if(arr[j]>arr[i])
				f[j] = max(f[j],f[i]+1);
		}
		for(int i=1;i<=n;i++)ans = max(ans,f[i]);
		cout << ans << endl;
	}
}