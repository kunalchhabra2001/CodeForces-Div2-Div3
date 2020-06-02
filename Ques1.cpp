#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int N,totalprice=0,num=1000000007;
		cin>>N;
		long long int price[N];
		for(int i=0;i<N;i++){
			cin>>price[i];
		}
		sort(price,price+N,greater<int>());
		for(int i=0;i<N;i++){
			if((price[i]-i)>0)
			totalprice += (price[i]-i)%num;

		}


		cout<<totalprice<<endl;

	}






}