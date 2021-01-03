# include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int max (int a,int b) {
	if(a>=b) {
		return a;
	}
	else 
		return b;
}
int knapsack(int wt[],int price[],int W,int ind,int n) {
	if(W == 0) return 0;
	if(ind >= n) return 0;
	if (dp[ind][W] != -1) {
		return dp[ind][W];
	} 
	if(wt[ind] <= W){ 
	 	int left = price[ind] + knapsack(wt,price,W - wt[ind],ind + 1,n);
		int right = knapsack(wt,price,W ,ind + 1,n);
		return dp[ind][W] = max(left,right);
	}
	else if(wt[ind] > W) {
	
		return dp[ind][W] = knapsack(wt,price,W ,ind + 1,n);
	}
}
int main() {
	int wt[100],price[100],n,W;
	cin>>n;
	cin>>W;
	for(int i = 0;i<n;i++) {
		cin>>wt[i];
		
	}
	 for(int i = 0;i<n;i++){
	 cin>>price[i];
	}

	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=W;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<knapsack(wt,price,W,0,n)<<endl;
	for(int i = 0;i<=n;i++) {
		cout<<endl;
		for(int j = 0;j<=W;j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
	cout<<endl;
	for(int i = 0;i<=n;i++) {
		cout<<dp[i][W]<<endl;
	}
	return 0;
}
