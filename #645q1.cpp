#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int start,k;
		cin >> start >> k;
		if(k==1)cout << start << endl;
		else{
			int count1=0,ans = start,max = 0, min = 9,num=start,rem=0;
			while(count1<(k-1)){
				num = ans;
				while(num){
					rem = num%10;
					num = num/10;
					if(rem>max)max = rem;
					if(rem<min)min = rem;
				}
				int sum = max*min;
				if(sum==0)break;
				ans += max*min;
				max = 0;
				min = 9;
				count1++;
			}


			cout << ans << endl;
		}


	}



}