#include<bits/stdc++.h>
using namespace std;

#define int unsigned long long
#define PI 3.14159265

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		double n;
		cin >> n;
		double side,angle,angle1;
		angle = 360/(4*n);
		angle1 = (n-2)*180/n;
		side =  sin(angle1)/(sqrt(2)*sin(PI*angle/180)*sin(PI*angle/90));
		cout << std::setprecision(15) << side << endl;
	}




}