#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long int N;
		cin >> N;
		long long int ans = 0,limit=0;
		long long int reach = sqrt(N)+1;
		long long int dp[reach+1]={0};
		for(int i=1;i<=reach;i++)
		{
			dp[i] = i*(3*i+1)/2;

		}
		
		//First highest pile
		for(int i=1;i<reach;i++)
		{
			if(N<2 or limit!=0)break;
			if(N==dp[i]){
				ans++;
				N -= dp[i];
				limit = i;
				if(N<2)break;
			}
			if(N>dp[i] and N<dp[i+1])
			{
				ans++;
				N -= dp[i];
				limit = i+1;
				if(N<2)break;
			}
		}
		if(N<2)cout<<ans<<endl;
		else{		
		for(int i=limit;i>=1;i--)
		{
			if(N<2)break;
			if(N==dp[i]){
				ans++;
				N -= dp[i];
				limit=i;
				if(N<2)break;
			}
			while(N<dp[i] and N>dp[i-1])
			{
				ans++;
				N -= dp[i-1];
				limit=i;
				if(N<2)break;
				
			}



		}

		cout << ans << endl;
		}


	}





}