# include<bits/stdc++.h>
using namespace std;


int dp[100][100];
int subsetSum(int arr[],int ind,int sum,int n) {

	if(ind == n) {
		return 0;
	}
	if(sum == 0) {
		return 1;
	}
	if(dp[ind][sum] != -1) {
		return dp[ind][sum];
	}
	else if(arr[ind]<=sum){
		int left = subsetSum(arr,ind+1,sum - arr[ind],n);
		int right = subsetSum(arr,ind+1,sum,n);
		return dp[ind][sum] = (left||right);
	}
	else if(arr[ind]>sum) {
		return dp[ind][sum] = subsetSum(arr,ind+1,sum,n);
	}
}
int main() {
	int arr[100],n,sum =0;
	cin>>n;
	//cin>>sum;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	for(int i = 0;i<n;i++) {
		sum = sum + arr[i];
	}
	cout<<sum;
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=(sum/2);j++) {
			dp[i][j] = -1;
		}
	}

	for(int i = 0;i<=n;i++) {
		cout<<endl;
		for(int j = 0;j<=(sum/2);j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
		if(sum%2) {
		cout<<false;
	}
	else {
		cout<<subsetSum(arr,0,sum/2,n);
	}
		for(int i = 0;i<=n;i++) {
		cout<<endl;
		for(int j = 0;j<=(sum/2);j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
