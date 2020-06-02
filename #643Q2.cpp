#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,count1=0,sum=0;
		cin >> n >> k;
		int a[n+1],b[n+1];
		for(int i=1;i<=n;i++) cin >> a[i];
		for(int i=1;i<=n;i++) cin >> b[i];
		sort(a+1,a+n+1);
		sort(b+1,b+n+1);
		for(int i=n;i>=1;i--)
		{
			if(count1==k)break;
			else{
				int comp = b[i];
				int comp1 = a[n+1-i];
				if(comp>comp1){
					a[n+1-i] = b[i];
					count1++;
				}
				else break;


			}



		}
		for(int i=1;i<=n;i++)sum += a[i];
		cout << sum << endl;


	}



}