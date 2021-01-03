# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int partiSum(int arr[],int n,int sum) {
	if(sum==0)
		return 1;
	if(n<0) {
		return 0;
	}
	if(dp[sum][n] != -1) {
		return dp[sum][n];
	}
	else {
	
		if(arr[n]<= sum) {
			return dp[sum][n] = partiSum(arr,n-1,sum - arr[n]);
			
		}
	return dp[sum][n] = partiSum(arr,n-1,sum);
	}

	
}
int subsetSum(int arr[],int n) {
	int sum = 0;
	for(int i=0;i<n;i++) {
		sum = sum + arr[i];
	}
	for(int i = 0;i<=sum;i++) {
		for(int j = 0;j<=n;j++) {
			dp[i][j] = -1;
		}
	}
	if((sum%2) == 1) {
		cout<<false;
	}
	
	else {
		cout<<partiSum(arr,n-1,sum/2);
	}
}
int main() {
	int n,arr[100];
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	subsetSum(arr,n);
	return 0;
}










