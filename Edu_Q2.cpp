#include<bits/stdc++.h>
using namespace std;

#define int long long

bool visited[100][1000];
signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		memset(visited,false,sizeof(visited));
		int n,m,x,y,cost=0;
		cin >> n >> m >> x >> y;
		string s[n];
		for(int i=0;i<n;i++){
			cin >> s[i];
		}
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(!visited[i][j]){
				if(s[i][j]=='.')
				{
					if(j<m-1){
						if(s[i][j+1]=='.'){
							if(2*x>=y){
								cost += y;
								visited[i][j+1]=true;
								
							}
							else{
								cost += x;
								 
							}
						}
						else{
							cost += x;
							
						}


					}
					else if(!visited[i][m-1] && s[i][m-1]=='.'){
						cost += x;
					}

					
					}
					visited[i][j]=true;
			}


			}
		
		}
		cout << cost << endl;



	}

}