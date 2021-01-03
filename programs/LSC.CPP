# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int subStr(string A,string B,int m,int n,int count) {
	if(m<0 || n<0) {
		return count;
	}
	if(dp[m][n] != -1) {
		return dp[n][m];
	}

	if(A[m] == B[n]) {
		 count = 1 + subStr(A,B,m-1,n-1,count + 1);
		
		return dp[m][n] = count;
	}
	if(A[m] != B[n]) {
		return dp[m][n] = 0;
		
	}
	subStr(A,B,m-1,n);
	subStr(A,B,m,n-1);
	
}





int main() {
	string A,B;
	int ans = 0;
	getline(cin,A);
	getline(cin,B);
	int m = A.length() -1;
	int n = B.length() -1;
	for(int i = 0;i<m;i++) {
		for(int j = 0;j<n;j++) {
			dp[i][j] = -1;
	}
	}
	subStr(A,B,m,n);
	for(int i = 0;i<m;i++) {
		cout<<endl;
		for(int j = 0;j<n;j++) {
			cout<<dp[i][j]<<""  "";
	}
	}
	
	return 0;
}











