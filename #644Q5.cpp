#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,flag=0;
		cin >> n;
		string s[50];
		for(int i=0;i<n;i++)
		{
			cin >> s[i];
		}
		for(int i=0;i<n-1;i++)
		{
			if(flag==1)break;
			for(int j=0;j<n-1;j++){
				if(flag==1)break;
				if(s[i][j]=='1'){
					if(s[i+1][j]=='0' && s[i][j+1]=='0'){
						flag=1;
						break;
					}
				}
			}
		}
		if(flag==0)cout<<"YES"<<endl;
		else cout << "NO" << endl;

	}


}