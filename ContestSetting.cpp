#include<bits/stdc++.h>
using namespace std;

const long long int mod = 998244353;
long long int cost=0;
long long int computer(vector<long long int> v, int size, int k)
{	

	if(k==0) return 1;
	if(size==0) return 0;
	return cost = ((v[size-1]*(computer(v,size-1,k-1)%mod) + (computer(v,size-1,k))%mod)%mod);

}






int main()
{
	int n,k;
	cin >> n >> k;
	long long int A[n];
	for(int i=0;i<n;i++) cin >> A[i];
	sort(A,A+n);
	vector<long long int> v;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(A[i]==A[i-1])count++;
		else{
			v.push_back(count);
			count=1;
		}

	}
	v.push_back(count);
	int size = v.size()+1;
	cout << computer(v,size,k) << endl;



}
