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
		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}
		sort(arr,arr+n);
		std::vector<int> v;
		std::vector<int> count1;
		int count = 1;
		for(int i=1;i<n;i++)
		{
			if(arr[i]==arr[i-1])count++;
			else{
				v.push_back(arr[i-1]*count);
				count1.push_back(count);
				count=1;
			}
		}
		int total_gran=n,i = n-1;
		if(total_gran>=arr[n-1]) cout << 1+n << endl;
		else{
			while(total_gran<arr[i] && i>=0)
			{
				i--;
				total_gran -= 1;
				
			}
			cout << total_gran+1 << endl;
		}

		}

	}