#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long double h,c,a;
		cin >> h >> c >> a;
		long double min_diff = INT_MAX,diff = INT_MAX;
		if(a>=h)cout << "1" << endl;
		else if(a<=c)cout << "2" << endl;
		else{
			long double avg = (h+c)/2;
			if(avg >=a)cout << "2" << endl;
			else{
				int count_op = 0,ans=0;
				long double count_op_fake = 0;
				long double total_temp = 0;
				for(int i=0;i<10000;i++){
					count_op ++;
					count_op_fake++;
					if(count_op%2!=0){
						total_temp += h;
						avg = total_temp/count_op_fake;
						diff = abs(avg-a);
						if(diff < min_diff){
							ans = count_op;
							min_diff = diff;
						}
					}
					else{
					total_temp += c;
					avg = total_temp/count_op_fake;
					diff = abs(avg-a);
					if(diff < min_diff){
						ans = count_op;
						min_diff = diff;
					}

					}
					
				}
				cout << ans << endl;


			}



		} 


	}

}