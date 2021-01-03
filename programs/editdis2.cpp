# include<bits/stdc++.h>
using namespace std;
int dp [100][100];
int editDistance(string A,string B,int n,int m) {
	if(n==0) {
		return m;
	}
	if(m == 0) {
		return n;
	}
	if(dp[n][m] != -1) {
		return dp[n][m];
	}
	if(A[n] == B[m]) {
		return dp[n][m] = editDistance(A,B,n-1,m-1);
	}
	else {
		return dp[n][m]  = min(1 + editDistance(A,B,n,m-1),min(1 + editDistance(A,B,n-1,m),1 + editDistance(A,B,n-1,m-1)));
		
	}
}
int main() {
	string str1,str2;
	getline(cin,str1);
	getline(cin,str2);
	int n = str1.length();
	int m = str2.length();
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=m;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<editDistance(str1,str2,n-1,m-1);
	return 0;
}
