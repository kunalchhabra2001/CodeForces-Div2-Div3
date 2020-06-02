#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,k;
		cin >> n >> m >> k;
		if(m==0 || m>=n)cout << "0" << endl;
		else{
			int cards = n/k;
			if(cards>m)cout << m << endl;
			else{
				int arr[n];
				if(m>cards)arr[0]=cards;
				m -= cards;
				int num = m/(k-1);
				if(m%(k-1)==0)cout << cards-num << endl;
				else{
					cout << cards-num-1 << endl;
				}
			}


		}


	}


}