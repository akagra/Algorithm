# include<bits/stdc++.h>
using namespace std;
int knapsack(int wt[],int val[],int W,int n,int dp[]) {
	if(W == 0) {
		return 0;
	}
	if(dp[W] != -1) {
		return dp[W];
	}
	int m = 0;
	for(int i = 0;i<n;i++) {
		if(wt[i]<=W) {
			dp[W] = max(m,val[i] + knapsack(wt,val,W-wt[i],n,dp));
		}
		 
	}
	return dp[W];
}
int main() {
	int wt[100],val[100],W,dp[1000],n;
	cin>>n>>W;
	for(int i = 0;i<n;i++) {
		cin>>wt[i];
		//cin>>val[i];
	}
	for(int i = 0;i<n;i++) {
		//cin>>wt[i];
		cin>>val[i];
	}
	dp[0] = 0;
	for(int i = 1;i<=W;i++) {
		dp[i] = -1;
	}
	cout<<knapsack(wt,val,W,n,dp);
	return 0;
}
