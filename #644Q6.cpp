#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,m,ans=0,count1=0,flag=0,count2=0;
		cin >> n >> m;
		string s[n];
		string comp;
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		comp = s[0];
		if(m==1){
			cout << "a" << endl;
		}
		else{
			if(n==1)cout<<comp<<endl;
			else if(n==2){
				for(int i=0;i<m;i++){
					if(s[0][i]!=s[1][i]){
						count1++;
						ans = i;
					}
				}
				if(count1<=1){
					cout << comp << endl;
				}
				else if(count1==2){
					comp[ans]=s[1][ans];
					cout << comp << endl;
				}
				else cout << "-1" << endl;
			}
			else{
				int start = 1;
				while(count1<=2 and start<=n-1)
				{
					if(flag==1)break;
					for(int i=0;i<m;i++){
						if(s[0][i]!=s[start][i]){
							count1++;
							if(count1==1)ans = i;
						}a
					}
					if(count1>=2 and start!=1){
						if(count1==2 and count2==0){
							comp[ans] = s[start][ans];
							count2++;
						}
						else{
						cout << "-1" << endl;
						flag=1;
						break;
						}
					}
					if(count1>2 and flag==0){
						cout << "-1" << endl;
						flag=1;
						break;
					}
					else if(count1==2 and start==1){
						comp[ans]=s[1][ans];
						count2++;
					}
					
					start++;
					count1=0;
				}
				if(flag==0)cout << comp << endl;
			} 
			}
		}

	}