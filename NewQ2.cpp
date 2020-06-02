#include<bits/stdc++.h>
using namespace std;

#define int long long

signed main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s1;
        cin >> s1;

        int n = s1.length();

        int ans = INT_MAX;

        for (int i = 0; i <= n; i++)
        {
            string s2 = "";
            for (int j = 0; j < i; j++)
            {
                s2 += '0';
            }

            for (int j = 0; j < n - i; j++)
            {
                s2 += '1';
            }

            int diff = 0;

            for (int j = 0; j < n; j++)
            {
                if (s1[j] != s2[j])
                {
                    diff++;
                }
            }

            ans = min(diff, ans);

            s2 = "";

            for (int j = 0; j < n - i; j++)
            {
                s2 += '1';
            }

            for (int j = 0; j < i; j++)
            {
                s2 += '0';
            }

            diff = 0;

            for (int j = 0; j < n; j++)
            {
                if (s1[j] != s2[j])
                {
                    diff++;
                }
            }

            ans = min(diff, ans);
        }

        cout << ans << endl;
    }


	}




