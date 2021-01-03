# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int isInterleav(string A,string B,string C,int a,int b,int c,int i,int j,int k) {
	if(i == a && k == c && j == b) {
	
		return 1;
	}
	if( k == c) {
		
		return 0;
	}
		else if(A[i] != C[k] && B[j] != C[k]){
		return 0;
	}
	if(dp[i][j] != -1) {
		return dp[i][j];
	}
	
	if(A[i] == C[k] && B[j] != C[k] && i != a) {
		//dp[i][j] = 1;
	//	cout<<1<<endl;
		return dp[i][j] = isInterleav(A,B,C,a,b,c,i+1,j,k+1);
	}
	else if(B[j] == C[k] && A[i] != C[k] && j != b) {
		//dp[i][j] = 1;
		
		return dp[i][j] = isInterleav(A,B,C,a,b,c,i,j+1,k+1);
	}
	else if(A[i] == C[k] && B[j] == C[k]){
		int left =  isInterleav(A,B,C,a,b,c,i+1,j,k+1) ;
		int right =  isInterleav(A,B,C,a,b,c,i,j+1,k+1);
		dp[i][j] = (left||right);
		return dp[i][j];
	}
	

}





int main() {
	string A,B,C;
	getline(cin,A);
	getline(cin,B);
	getline(cin,C);
	
	for(int i = 0;i<=A.length();i++) {
		for(int j = 0;j<=B.length();j++) {
			dp[i][j] = -1;
		}
	}
	cout<<isInterleav(A,B,C,A.length(),B.length(),C.length(),0,0,0);
		for(int i = 0;i<A.length();i++) {
			cout<<endl;
		for(int j = 0;j<B.length();j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
	return 0;
}
