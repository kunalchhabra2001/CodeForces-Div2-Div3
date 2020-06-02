#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int N;
		cin >> N;
		int i=1;
		if(N<4)cout<<"-1"<<endl;
		else if(N==4)cout << "3 1 4 2" << endl;
		else{
			for(i=1;i<=N;i=i+2)
			{
				cout << i << " "; 

			}
			i = i-5;
			cout << i << " ";
			if(N%2==0){
				i=i+4;
				cout << i << " ";
				i = i-2;
				cout << i << " ";
				i = i-4;
				if(i>=2)cout << i << " ";
				i = i-2;
				while(i>=2){
					cout << i << " ";
					i = i-2;
				}
			}
			else{
				i=i+2;
				cout << i << " ";
				i = i-4;
				if(i>=2)cout << i << " ";
				i = i-2;
				while(i>=2){
					cout << i << " ";
					i = i-2;
				}


			}
			cout << endl;

		}
	}



}