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
		int arr[n];
		for(int i=0;i<n;i++){
			cin >> arr[i];
		}
		sort(arr,arr+n);
		int min_num=INT_MAX;
		for(int i=1;i<n;i++){
			int diff = arr[i]-arr[i-1];
			if(diff<min_num)min_num=diff;
		}
		cout << min_num << endl;

	}




}