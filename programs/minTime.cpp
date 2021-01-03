# include<bits/stdc++.h>
using namespace std;

int count(int n,int a[],int dp[]) {
	if(n == 1) {
		return a[0];
	}
	if(dp[n] != -1) {
		return dp[n];
	}
	if(n%2 == 0) {
		dp[n] = min(a[0] + count(n-1,a,dp),a[2] + count(n/2,a,dp));
	}
	else {
		dp[n] = min(a[0] + count(n-1,a,dp),a[1] +a[2]+ count((n +1)/2,a,dp));
	}
	return dp[n];
	
}




int main() {
	int n,a[3],dp[200];
	cin>>n;
	for(int i = 0;i<3;i++) {
		cin>>a[i];
	}
	for(int i = 0;i<((2*n)+1);i++) {
		dp[i] = -1;
	}
	cout<<count(n,a,dp);
 	return 0;
}
