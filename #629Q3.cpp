#include<bits/stdc++.h>
using namespace std;


int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		int n,flag=0;
		cin >> n;
		string s;
		cin >> s;
		string x = "";
		string y = "";
		for(int i=0;i<n;i++)
		{
			int count=0;
			if(s[i]=='2' && flag==0 && count==0){
				x += '1';
				y += '1';
				count=1;
			}
			if(s[i]=='1' && flag==0 && count==0){
				flag=1;
				x += '1';
				y += '0';
				count=1;
			}
			if(s[i]=='2' && flag!=0 && count==0){
				x+= '0';
				y += '2';
				count=1;
			}
			if(s[i]=='1' && flag!=0 && count==0)
			{
				x+='0';
				y+='1';
				count=1;

			}
			if(s[i]=='0' && count==0)
			{
				x+='0';
				y+='0';
				count=1;
			}


		}
		cout << x << endl;
		cout << y << endl;



	}




}