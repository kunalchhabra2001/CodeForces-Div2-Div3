#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		int N,count=0,j=0;
		cin>>N;
		int A[N]={0},B[N]={0};
		for(int i=0;i<N;i++){
			cin>>A[i]; //Can be either 0 or 1//
		}
		for(int i=0;i<N;i++){
			if(A[i]==1){
				B[j]=i;
				j++;
			}
		}
		for(int i=0;i<j-1;i++){
			if(count!=0)break;
			else{
			if((B[i+1]-B[i])<=5){
				cout<<"NO"<<endl;
				count++;
				break;
			}
		}
		}
		if(count==0){
			cout<<"YES"<<endl;
		}
	}
}