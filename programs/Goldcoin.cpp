# include<bits/stdc++.h>
using namespace std;

int stone[100][100];
int dp[100][100];
int max(int a,int b) {
	if(a>b) {
		return a;
	}
	else
		return b;
}
int countStone(int i,int j,int n) {
	if(dp[i][j]!=-1) {
		return dp[i][j];
	}
	if(j == 0) {
		return stone[i][j];
	}
	else{
		if(i != 0 && i != n) {
		
		dp[i][j] = stone[i][j] + max(countStone(i,j-1,n),max(countStone(i-1,j-1,n),countStone(i + 1,j-1,n)));
		}
		else if(i == 0) {
			dp[i][j] = stone[i][j] + max(countStone(i,j-1,n),countStone(i+1,j-1,n));
		}
		else if(i == n) {
			dp[i][j] = stone[i][j] + max(countStone(i-1,j-1,n),countStone(i,j-1,n));
		}
		
 	}
 	return dp[i][j];
}


int retSol(int n,int k) {
	int maxv = 0;
	for(int i = 0;i<=n;i++) {
		if(i>0 && i<n) {
		
			dp[i][k] = stone[i][k] + max(countStone(i,k-1,n),max(countStone(i-1,k-1,n),countStone(i+1,k-1,n)));
		}
		else if(i == 0) {
			dp[i][k] = stone[i][k] + max(countStone(i,k-1,n),countStone(i+1,k-1,n));
		}
		else if(i == n) {
			dp[i][k] = stone[i][k] + max(countStone(i-1,k-1,n),countStone(i,k-1,n));
		}
	}

	for(int j = 0;j<=n;j++) {
		maxv = max(dp[j][k],maxv);
	}
	return maxv;
}







int main() {
	int n,k;
	cin>>n>>k;
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<k;j++) {
			cin>>stone[i][j];
		}
	}
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<k;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<retSol(n-1,k-1);
	return 0;
}
