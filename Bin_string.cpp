#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n0,n1,n2;
		cin >> n0 >> n1 >> n2;
		if(n0==0 and n1==0 and n2!=0){
			for(int i=0;i<=n2;i++)cout<<"1";
			cout << endl;
		}
		else if(n2==0 and n1==0 and n0!=0){
			for(int i=0;i<=n0;i++)cout << "0";
			cout << endl;
		}
		else{
		cout << "0";
		for(int i=0;i<n0;i++)
		{
			cout << "0";
		}
		if(n1%2==0){
		for(int i=0;i<n1/2-1;i++){
			cout << "10";
		}
		cout << "1";
		for(int i=0;i<n2;i++){
			cout << "1";
		}
		cout << "0" << endl;
		}
		else{
			for(int i=0;i<n1/2;i++){
				cout << "10" ;
			}
			cout << "1";
			for(int i=0;i<n2;i++){
				cout << "1";
			}
			cout << endl;
		}
		}
	}

}