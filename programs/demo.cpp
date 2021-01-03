# include<bits/stdc++.h>
using namespace std;

int dp[100][100];


void Update(int n,int k) {
	for(int i =0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			cin>>dp[i][j];
		}
	}
	//return 0;
	
}

void print(int n,int k) {
	for(int i =0;i<n;i++) {
		for(int j = 0;j<n;j++) {
			cout<<dp[i][j];
		}
	}
}




int main() {
	int n,k;
	cin>>n>>k;
	Update(n,k);
	print(n,k);
	return 0;
}
