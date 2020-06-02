#include<bits/stdc++.h>
using namespace std;
int countGreater(int arr[], int n, int k) 
{ 
    int l = 0; 
    int r = n - 1; 
  
    // Stores the index of the left most element 
    // from the array which is greater than k 
    int leftGreater = n; 
  
    // Finds number of elements greater than k 
    while (l <= r) { 
        int m = l + (r - l) / 2; 
  
        // If mid element is greater than 
        // k update leftGreater and r 
        if (arr[m] > k) { 
            leftGreater = m; 
            r = m - 1; 
        } 
  
        // If mid element is less than 
        // or equal to k update l 
        else
            l = m + 1; 
    } 
  
    // Return the count of elements greater than k 
    return (n - leftGreater); 
int main()
{
	int T;
	cin >> T;
	while(T--)
	{
		long long int N,K,min1=INT_MAX,max1=INT_MIN;
		cin >> N >> K;
		long long int A[N],answer = N/2;
		for(int i=0;i<N;i++){
			cin >> A[i];
			min1 = min(min1,A[i]);
			max1 = max(max1,A[i]);
		}
		max1=0;
		long long int max2=0;
		long long int maxsum = min1+K;
		long long int sum[maxsum+1]={0};
		for(int i=0;i<N/2;i++){
			long long int sum1 = A[i] + A[N-1-i];
			if(sum1<=maxsum){
				sum[sum1]++;
				if(sum[sum1]>max1){
					max1=sum[sum1];
					max2=sum1;
				}
		}
		sort(A,A+N);
		sort(sum,sum+maxsum+1);
		while(flag){
			sum[maxsum] = sum[maxsum] - countGreater(A,N,max2);
			if(sum[maxsum]<sum[maxsum-1]){
				
			}


}