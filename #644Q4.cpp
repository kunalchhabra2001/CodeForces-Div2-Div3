#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,flag=0,max_num=1;
		cin >> a >> b;
		int sq_rt = sqrt(a);
		int limit = min(sq_rt,b);
		for(int i=1;i<=limit;i++){
			if(flag==1)break;
			else{
			if(a%i==0){
				if((a/i)<=b){
					cout << i << endl;
					flag=1;
					break;
				}
				else max_num = i;
				}
			else continue;
				}

			}
		if(flag==0)cout<<(a/max_num)<<endl;

	}


}