#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
#define x first
#define y second
#define mp make_pair
#define pb push_back
template <typename TYPE> inline void chkmax(TYPE &x,TYPE y){x<y?x=y:TYPE();}
template <typename TYPE> inline void chkmin(TYPE &x,TYPE y){y<x?x=y:TYPE();}
template <typename TYPE> void readint(TYPE &x)
{
    x=0;int f=1;char c;
    for(c=getchar();!isdigit(c);c=getchar())if(c=='-')f=-1;
    for(;isdigit(c);c=getchar())x=x*10+c-'0';
    x*=f;
}
const int MAXN=500005;

int n,k,a[MAXN];
bool solve()
{
	readint(n),readint(k);
	bool flag=0;
	for(int i=1;i<=n;++i)
	{
		readint(a[i]);
		if(a[i]<k)a[i]=0;
		else if(a[i]>k)a[i]=2;
		else a[i]=1;
		if(a[i]==1)flag=1;
	}
	if(!flag)return 0;
	if(n==1)return 1;
	for(int i=1;i<=n;++i)
		for(int j=i+1;j<=n && j-i<=2;++j){
			cout << (a[i] && a[j]) << endl;
			if(a[i] && a[j]){
				return 1;
			}
		}
	return 0;
}

int main()
{
	int T;
	readint(T);
	while(T--)printf(solve()?"yes\n":"no\n");
	return 0;
}