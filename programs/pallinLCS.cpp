# include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int PallinLCS(string A,int ind,int m) {
	if(ind == m) {
		return 1;
	}
	if(ind>m) {
		return 0;
	}
	if(dp[ind][m] != -1) {
		return dp[ind][m];
	}
	if(A[ind] == A[m]) {
		return dp[ind][m] = 2 + PallinLCS(A,ind+1,m-1);
	}
	else {
		int left =  PallinLCS(A,ind+1,m);
		int right = PallinLCS(A,ind,m-1);
		return dp[ind][m] = max(left,right);
	}
}












int main() {
	int k;
	
	string A;
	getline(cin,A);
	cin>>k;
	int m  = A.length();
	
	for(int i = 0;i<m;i++) {
		for(int j = 0;j<m;j++){
			dp[i][j] = -1;
		}
	}
	if((m-PallinLCS(A,0,m-1)) <=k) {
		cout<<1;
	}
	else {
		cout<<0;
	}
	 
	return 0;
}
