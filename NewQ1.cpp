#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,x;
		cin >> n >> x;
		int arr[n],count[2]={0};
		for(int i=0;i<n;i++){
			cin >> arr[i];
			count[arr[i]%2]++;
		}
		if (count[1] > 0)
        {

            if (x % 2 == 0 && count[0] == 0)
            {
                cout << "No" << endl;
            }

            else if (count[1] % 2 == 0)
            {
                if ((x - (count[1] - 1)) <= count[0])
                {
                    cout << "Yes" << endl;
                }

                else
                {
                    cout << "No" << endl;
                }
            }

            else
            {
                if ((x - count[1]) <= count[0])
                {
                    cout << "Yes" << endl;
                }

                else
                {
                    cout << "No" << endl;
                }
            }
        }

        else
            cout << "No" << endl;
    }

}