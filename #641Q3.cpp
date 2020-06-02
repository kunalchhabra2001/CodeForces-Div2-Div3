#include<bits/stdc++.h>
using namespace std;
#define int long long

int gcd(int x,int y)
{
	if(x%y==0)return y;
	else return gcd(y,x%y);

}
int lcm(int x,int y)
{
	int ans1 = gcd(x,y);
	return x*y/ans1;

}

signed main()
{
	int n;
	cin >> n;
	int arr[n+1];
	for(int i=1;i<=n;i++)cin >> arr[i];
	int pref[n+1],suff[n+1],ans;
	
	//Prop used::: GCD of LCM of all pairs is same as lcm of n numbers, where each number represent gcd of all numbers except ai
	//pref n suff help us in finding gcd of all numbers before and after ai resp;
    //2 props used:: gcd(a1...an) = gcd(gcd(gcd...(ai,aj)))
	//lcm(a1...an) = lcm(lcm(lcm(...(ai,aj))))
	
	pref[1]=arr[1],suff[n]=arr[n];
	for(int i=2;i<=n;i++){
		pref[i] = gcd(pref[i-1],arr[i]);
	}
	for(int i=n-1;i>=1;i--){
		suff[i] = gcd(suff[i+1],arr[i]);
	}
	for(int i=0;i<=n-1;i++){
		if(i==0)ans = suff[2]; //because for any i; ans = lcm(ans,gcd(pref[i],suff[i+2]))
		else if(i==n-1) ans = lcm(ans,pref[n-1]);
		else ans = lcm(ans,gcd(pref[i],suff[i+2]));
	}
	cout << ans << endl;


}
