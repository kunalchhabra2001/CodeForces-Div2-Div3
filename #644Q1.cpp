#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a,b;
		cin >> a >> b;
		if(a>b){
			if(a>=2*b){
				cout << a*a << endl;
			}
			else{
				cout << 4*b*b << endl;
			}
		}
		else{
			if(b>=2*a){
				cout << b*b << endl;
			}
			else{
				cout << 4*a*a << endl;
			}
		}

	}




}