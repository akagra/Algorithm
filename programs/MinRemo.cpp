# include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int min(int a,int b) {
	if(a<=b) {
		return a;
	}
	else 
		return b;
}
int MinRemo(int arr[],int i,int j,int k) { 
	if(i>=j) {
		return 0;
	}
	else if(arr[j]-arr[i] <= k) {
		return 0;
	}
	else if(dp[i][j]!=-1) {
		return dp[i][j];
	}
	else if(arr[j] - arr[i]>k) {
		dp[i][j] = 1 + min(MinRemo(arr,i+1,j,k),MinRemo(arr,i,j-1,k));
		return dp[i][j];
	}
}
int main() {
	int arr[100],n,k;
	cin>>n>>k;
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=n;j++) {
			dp[i][j] = -1;
		}
	}
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<MinRemo(arr,0,n-1,k);
	return 0;
}
