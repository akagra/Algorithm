# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int minRemov(int arr[],int i,int n) {
	if(i>=j) {
		return 0;
	}
	if(arr[i] - arr[n]<=k) {
		return 0;
	}
	if(dp[i][n] != -1) {
		return dp[i][j];
	}
	else {
		return dp[i][n] = 1 + min(minRemov(arr,i+1,n),minRemov(arr,i,n-1));
	}	
	
	
}

int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cout<<minRemov(arr,0,n-1);
	return 0;
}
