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
		std::vector<int> v;
		for(int i=1;i<=n;i++)
			{
				cin >> arr[i];
			}
		int ans = 0;
		int j = 1;
		sort(arr+1,arr+n+1);
		while(j<=n){
			int count1=arr[j],prev_j=j,max=arr[j];
			if((j+count1)>(n+1))break;
			for(int i=1;i<count1;i++){
				if(arr[j+i]>max)max=arr[j+i];
				count1 = max;
				if((j+count1)>(n+1))break;
			}
			if((j+count1)>(n+1))break;
			j+= count1;
			ans++;
		}

		cout << ans << endl;
	}



}