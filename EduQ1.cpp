#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b,c,d;
		cin >> a >> b >> c >> d;
		if(b>=a)cout<<b<<endl;
		else{
			if(d>=c)cout<<"-1"<<endl;
			else{
				int ans = (a-b)/(c-d);
				if(b+(ans*(c-d))<a)
					cout << b+(ans+1)*c<<endl;
				else
					cout << b+ans*c<<endl;

			}

		}



	}	


}