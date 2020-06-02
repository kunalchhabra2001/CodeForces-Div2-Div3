#include<bits/stdc++.h>
using namespace std;

int main(){

	long long int X,Y,count=0,diff=0;
	cin>>X>>Y;
	if(Y<X){
		count += (X-Y);
		cout << count << endl;
	}
	if(Y == X) cout << count << endl;
	else{
		if(Y%2==0){
			diff = Y/2;
			count++;
		}
		else{
			diff = Y/2 +1;
			count += 2;
		}
		while (diff > X){ 
			if(diff%2==0){
			diff = diff/2;
			count++;
			}
			else{
			diff = diff/2 +1;
			count += 2;
			
			}
		}
			count += X-diff;
			cout << count << endl;
		}


	}