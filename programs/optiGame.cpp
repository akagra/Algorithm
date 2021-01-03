# include<bits/stdc++.h>
using namespace std;
int dp[100][100];
int minSol(int arr[],int i,int j) {
	if(i == j) {
		return arr[i];
		
	}
	else if(i>j) {
		return 0;
	}
	if(dp[i][j] != -1) {
		return dp[i][j];
	}
	else {
		return dp[i][j] = max((arr[i] + min(minSol(arr,i+2,j),minSol(arr,i+1,j-1))),(arr[j] + min(minSol(arr,i+1,j-1),minSol(arr,i,j-2))));
	}
	
}
int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=n;j++) {
			dp[i][j] = -1;
		}
 	}
	cout<<minSol(arr,0,n-1);
	return 0;
}
