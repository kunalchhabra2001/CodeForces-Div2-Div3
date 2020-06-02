#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while(T--)
		{
			long long int a,b,ans=0;
			cin >> a >> b;
			long long int rem = a%b;
			if(rem==0)cout<<"0"<<endl;
			else cout << b-rem << endl;



		}
}