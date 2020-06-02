#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long int n,mod=0,flag=0;
		cin >> n;
		vector<long long int> v;
		for(int i=4;i<=n+1;i=i*2){
			v.push_back(i-1);
		}
		long long int len=v.size();
		for(int i=0;i<len;i++){
			if(flag==0){
				mod = n%v[i];
				if(mod==0){
					cout << n/v[i] << endl;
					flag=1;
					break;
				}
			}
			else break;

		}

	}



}