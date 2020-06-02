#include<bits/stdc++.h>
using namespace std;

#define int long long

int maxSubArraySum(int a[], int size) 
{ 
    int max_so_far = INT_MIN, max_ending_here = 0; 
  
    for (int i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
} 
signed main()
{
	int n;
	cin >> n;
	int arr[n];
	std::vector<int> ans;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int pre[n],suff[n];
	for(int i=0;i<n;i++)
	{
		if(i==0)pre[i] = arr[0];
		else pre[i] = pre[i-1]+arr[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		if(i==n-1)suff[i] = arr[i];
		else suff[i] = suff[i+1]+arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i])
	}

}