#include<bits/stdc++.h>
using namespace std;

void showstack(stack <int> s) 
{ 
    while (!s.empty()) 
    { 
        cout << s.top()<< ' ';
        s.pop(); 
    } 
} 

int main(){
	int T;
	cin>>T;
	while(T--){
		long long int N,j=0,count=0;
		cin>>N;
		int A[N],B[N];
		stack <int> s,g;
		for(int i=0;i<N;i++){
			cin>>A[i];
			s.push(A[i]);}

		int t = s.top();
		s.pop();
		while(s.top()>=t){
			B[j] = t;
			t=s.top();
			j++;
			s.pop();
		}
		int q=s.top();
		B[j] = t;
		j++;
		s.pop();
		for(int i=q+1;i<=9;i++){
			if(count!=0)break;
			else{
				for(int k=0;k<j;k++){
					if(count!=0)break;
					else{
						if(B[k] == i){
						    s.push(B[k]);
						    B[k]=q;
							count++;
							break;
						}
					}	
				}	
			}
		}

		while(!s.empty()){
			g.push(s.top());
			s.pop();
		}
		showstack(g);
		for(int i=0;i<j;i++){
			cout << B[i] << ' ';
		}
		cout<<endl;
	}





}