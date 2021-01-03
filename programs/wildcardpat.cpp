# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int wildCard(string A,string pat,int m,int n) {
	if(m<0 && n<0) {
		return 1;
	}
	if(n<0) {
		return 0;
	}
	if(m<0) {
		for(int i = 0;i<=n;i++) {
			if(pat[i] != '*') {
				return 0;
			}
		}
		return 1;
	}
	if(dp[m][n] != -1) {
		return dp[m][n];
	}
	else {
		if(pat[n] == '*') {
			return dp[m][n] = wildCard(A,pat,m-1,n) || wildCard(A,pat,m,n-1); 
		}
		else if(pat[n] == '?' || pat[n] == A[m]) {
			return	dp[m][n] = wildCard(A,pat,m-1,n-1);
		}
	}
	return dp[m][n] = 0;
	
}




int main() {
	string A,pat;
	getline(cin,pat);
	getline(cin,A);
	
	int m = A.length();
	int n = pat.length();
	for(int i=0;i<=m;i++) {
		for(int j = 0;j<=n;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<wildCard(A,pat,m,n);
	return 0;
}
