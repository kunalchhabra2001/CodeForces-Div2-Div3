#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int n,q;
	cin >> n >> q;
	multiset<int>multi_set;
	multiset<int>::iterator ms_iterator;
	int x;
	for(int i=1;i<=n;i++)
	{
		cin >> x;
		multi_set.insert(x);
	}
	for(int i=0;i<q;i++){
		cin >> x;
		if(x<0)
		{
			ms_iterator = abs(x);
			multi_set.erase(ms_iterator);
		}
		else{
			multi_set.insert(x);
		}
	}
	if(multi_set.size()>0){
		ms_iterator = multi_set.begin();
		cout << *ms_iterator << endl;
	}
	else cout << "0" << endl;



}