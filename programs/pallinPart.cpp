# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int pallinPart(int i,int n,string str) {
	if(i == n) {
		return 1;
	}
	if(i>n) {
		return 0;
	}
	if(str[i] == str[n]) {
		dp[i][n] = pallinPart(i+1,n-1,str) +2;
	}
	else {
		return dp[i][n] = max(pallinPart(i+1,n,str),pallinPart(i,n-1,str));
	}
	return dp[i][n];
}


int main() {
	
	
	string str;
	getline(cin,str);
	cout<<pallinPart(0,(str.length()-1),str);
	return 0;
}
