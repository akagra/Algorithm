# include<bits/stdc++.h>
using namespace std;

int dp[100][100];
int max(int a,int b) {
	if(a>b) {return a;}
	else 
		return b;
	}




int lrs(string x,int left,int right) {
	if(left<0||right<0) {
		return 0;
	}
	if(dp[left][right]!=-1) {
		return dp[left][right];
	}
	if(x[left] == x[right] && left != right) {
		return 1 + lrs(x,left-1,right - 1);
	}
	else {
		int i = lrs(x,left-1,right);
		int j = lrs(x,left,right-1);
		return dp[left][right] = max(i,j);
	}
}
	







int main() {
	string x,y;
	getline(cin,x);
	//getline(cin,y);
	for(int i = 0;i<x.length();i++) {
		for(int j = 0;j<x.length();j++) {
			dp[i][j] = -1;
		}
	}
	cout<<lrs(x,(x.length()-1),(x.length()-1));
	return 0;
}
