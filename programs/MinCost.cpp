# include<bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int min(int a,int b) {
	if(a<b) 
		return a;
	else 
		return b;
}
int MinCost(int cost[],int ind,int n,int W,int sum) {
	if(W == 0) {
		return 0;
	}
	if(ind>= n) {
		return sum;
	}

	if(dp[ind][W]!= sum+1) {
		return dp[ind][W];
	}
	 if((ind + 1)<=W) {
		int left = cost[ind] + MinCost(cost,ind,n,W-(ind+1),sum);
		int right = MinCost(cost,ind + 1,n,W,sum);
		return dp[ind][W] = min(left,right);
	}
	else if((ind+1)>W) {
		return dp[ind][W] = MinCost(cost,ind + 1,n,W,sum);
	}
	else if(cost[ind] == -1) {
		return dp[ind][W] = MinCost(cost,ind + 1,n,W,sum);
	}
}


int main() {
	int T;
	cin>>T;
	while(T--) {
	
	int n,cost[1001],W,sum =0;
	cin>>n>>W;
	for(int i =0;i<n;i++) {
		cin>>cost[i];
	}
	for(int i =0;i<n;i++) {
		sum = sum + cost[i];
	}
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=W;j++) {
			dp[i][j] = sum + 1;
		}
	}
	
	
	cout<<MinCost(cost,0,n,W,sum)<<endl;
	}

	return 0;
}
