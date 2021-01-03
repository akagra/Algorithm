# include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int max(int a,int b) {
	if(a>b) {return a;}
	else 
		return b;
	}




int lcs(string x,string y,int left,int right) {
	if(left<0||right<0) {
		return 0;
	}
	if(dp[left][right]!=-1) {
		return dp[left][right];
	}
	if(x[left] == y[right]) {
		return 1 + lcs(x,y,left-1,right - 1);
	}
	else {
		int i = lcs(x,y,left-1,right);
		int j = lcs(x,y,left,right-1);
		return dp[left][right] = max(i,j);
	}
}
	







int main() {
	string x,y;
	getline(cin,x);
	getline(cin,y);
	for(int i = 0;i<x.length();i++) {
		for(int j = 0;j<y.length();j++) {
			dp[i][j] = -1;
		}
	}
	
	int m = (x.length()-1);
	int n = (y.length()-1);
	cout<<lcs(x,y,m,n);
	for(int i = 0;i<m;i++) {
		cout<<endl;
		for(int j = 0;j<n;j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
	return 0;
}
