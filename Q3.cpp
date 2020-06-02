#include<bits/stdc++.h>
using namespace std;

int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long int N;
		cin >> N;
		long long int A[N],sum=0;
		cin >> A[0];
		long long int max1 = A[0];
		for(int i=1;i<N;i++)
		{
			cin >> A[i];
			if(A[i]*A[i-1]>0){
					max1 = max(max1,A[i]);
			}
			else{
					sum += max1;
					max1 = A[i];
			}
		}
		sum +=max1;
		cout << sum << endl;


	}



}