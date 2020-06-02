#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,count1=0;
		cin >> n;
		int count[2]={0};
		int arr[n],rem[n]={0};
		for(int i=0;i<n;i++){
			cin >> arr[i];
			
		}
		sort(arr,arr+n);
		rem[0] = arr[0]%2;
		count[rem[0]]++;
		for(int i=1;i<n;i++){
			rem[i]=arr[i]%2;
			count[rem[i]]++;
		}
		if(count[0]%2==0)cout<<"YES"<<endl;
		else{
			for(int i=1;i<n;i++){
				if(abs(arr[i]-arr[i-1])==1){
					count1++;
				}
			}
			if(count1>=1)cout<<"YES"<<endl;
			else cout <<  "NO" << endl;
		}
	}




}