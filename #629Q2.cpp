#include<bits/stdc++.h>
using namespace std;



int main()
{
	int t;
	cin >> t;
	while(t--)
	{
	long long int n,k;
	cin >> n >> k;
	string s="";
	for(int i=0;i<n;i++)
	{
		s += "a";

	}
	for(int i=2;i<n;i++){
		unsigned long long int comp = i*(i+1)/2;
		unsigned long long int comp_prev = i*(i-1)/2;
		if(k==comp){
			s[n-i-1]='b';
			s[n-i]='b';
			break;
		}
		if(k==comp_prev){
			s[n-i+1]='b';
			s[n-i]='b';
			break;
		}
		if(k<comp && k>comp_prev){
			s[n-i-1]='b';
			long long int diff = (k-comp_prev)%k;
			s[n-diff]='b';
			break;
		}

	}
	cout << s << endl;
	}




}