#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int T;
	cin >> T;
	while(T--){
		long long int N,totalcount=0,count=0,count1=0;
		cin>>N;
		long long int A[N],B[N]={0},e=N*(N+1)/2;
		vector<long long int> b;
		for(int i=0;i<N;i++){
			cin>>A[i];
			if(A[i]%2!=0){
				B[i]=1;
				if(A[i]==1)totalcount++;}
			if(A[i]%2==0 && A[i]%4!=0){
				B[i]=2;
				b.push_back(i);
			}
			if(A[i]%4==0){
				B[i]=4
				totalcount++;;
		}
		long long int c=0,d=b.size();
		long long int value1 = 0,value2 = 0,value3=0;
		if(d > 0){
		    value2 = b[c]; 
    		for(int i=0;i<b[0];i++){
    			if(B[i]==1)count++;
    			if(B[i]==4){
    				count=0;
    			}
    		}
		}
		totalcount += count;
		value3 = count;
		c++;
		
		while(c < d){
			count=0;
			count1=0;
			
			value1 = b[c-1];
			value2 = b[c];
			for(int i=value1+1;i<value2;i++){
				if(B[i]==1)count++;
				if(B[i]==4){
					totalcount += value3*count;
					value3=0;
					totalcount += count;
					count1++;
					count = 0;
				}
			}
			if(count1==0){
			    totalcount += 2*count;
			    totalcount += value3*count;}
			else totalcount += count;
			
			value3 = count;
			c++;
			
		}
		count=0;
		count1=0;
		if(d>0){
		for(int i = b[d-1]+1; i<N;i++){
			if(B[i]==1)count++;
			if(B[i]==4){
				totalcount += value3*count;
				totalcount += count;
				count=0;
		}
		}
		}
		if(count1==0){
		    totalcount += value3*count;
		    totalcount += count;
		}

 		cout<<e-totalcount-d<<endl;




	}
}