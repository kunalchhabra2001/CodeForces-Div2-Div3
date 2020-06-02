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
		long long int A[N];
		if(N%4==0){
			cout << "YES" << endl;;
			for(int i=0;i<N/2;i++){
				A[i] = 4*(i+1);
				if(i%2==0)A[N/2+i] = A[i]-1;
				if(i%2!=0)A[N/2+i] = A[i]+1;
				cout << A[i] << " ";
			}
			for(int i=N/2;i<N;i++){
				cout << A[i] << " ";

			}
			cout << endl;
		}
		else{
			cout << "NO" << endl;
		}



	}



}