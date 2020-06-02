#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,k,flag=0;
		cin >> n >> k;
		int arr[n+1];
		for(int i=1;i<=n;i++)cin >> arr[i];
		sort(arr+1,arr+n+1);
		for(int i=1;i<=((n+1)/2);i++){
			if(arr[i]==k){
				cout<<"yes"<<endl;
				flag=1;
				break;
			}
		}
		if(flag==0)cout<<"no" <<endl;




	}




}