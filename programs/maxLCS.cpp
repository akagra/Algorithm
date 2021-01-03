# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int maxLCS(string A,string B,int m,int n) {
	if(n<0) {
		return 1;
	}
	if(m<0 && n>=0) {
		return 0;
	}
	if(dp[m][n] != -1) {
		return dp[m][n];
	}
	if(A[m]!=B[n]) {
		return dp[m][n] = maxLCS(A,B,m-1,n);
	}
	else if(A[m] == B[n]) {
		int left = maxLCS(A,B,m-1,n-1);
		int right = maxLCS(A,B,m-1,n);
		return dp[m][n] = (left + right);
 	}
}


int main() {
	string A,B;
	getline(cin,A);
	getline(cin,B);
	int m = A.length();
	int n = B.length();
	for(int i = 0;i<=m;i++) {
		for(int j = 0;j<=n;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<maxLCS(A,B,m-1,n-1);
	return 0;
}
