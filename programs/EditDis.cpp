# include<bits/stdc++.h>
using namespace std;
int dp[100][100];

int EditDis(string x,string y,int n,int m) {
	 if(m == 0) {
		return n;
	}
	if(n == 0) {
		return m;
	}
	 if(dp[n][m]!= -1) {
		return dp[n][m];
	}
	else if(x[n] == y[m]) {
		 return dp[n][m] = EditDis(x,y,n-1,m-1);
		 
	}
	else if(x[m] != y[n]){
		int left = 1 + EditDis(x,y,n-1,m);
		int right = 1 + EditDis(x,y,n,m-1);
		int centre = 1 + EditDis(x,y,n-1,m-1);
		dp[n][m] = min(left,min(right,centre));
 		return dp[n][m];
	}
	
}
int main() {
	string x,y;
	getline(cin,x);
	getline(cin,y);
	int n = x.length();
	int m = y.length();
	for(int i = 0;i<=n;i++) {
		for(int j = 0;j<=m;j++) {
			dp[i][j] = -1;
		}
	}
	cout<<EditDis(x,y,n-1,m-1);
	for(int i = 0;i<=n;i++) {
		cout<<endl;
		for(int j = 0;j<=m;j++) {
			cout<<dp[i][j]<<" ";
		}
	}
	return 0;
}
