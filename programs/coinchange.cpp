# include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int arr[100];


int coinChange(int sum,int ind,int n) {
	if(sum == 0) {
		return 1;
	}
	if(ind>=n||sum<0)
		return 0;
	if(dp[ind][sum]!=-1)return dp[ind][sum];
	
	int left = coinChange(sum - arr[ind],ind,n);
	int right = coinChange(sum,ind +1,n);
	return dp[ind][sum] = left + right; 
	}


int main() {
	int sum,n;
	cin>>n>>sum;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}

	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=sum;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<coinChange(sum,0,n);
	return 0;
}
