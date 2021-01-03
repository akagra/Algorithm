# include<bits/stdc++.h>
using namespace std;

int Dp[100][100];

int binomialCoeff(int c,int k,int **Dp) {
	if(Dp[c][k] != -1) {
		return Dp[c][k];
	}
	if(k == 0) {
		Dp[c][k] = 1;
		return Dp[c][k];
	}
	if( k == c) {
		Dp[c][k] = 1;
		return Dp[c][k];
	}
	Dp[c][k] = binomialCoeff(c-1,k,Dp) +  k*binomialCoeff(c-1,k-1,Dp);
	return Dp[c][k];  
}


int main() {
	int T;
	cin>>T;
	while(T!=0) {
	
	int c ,k ;
	cin>>c>>k;

	int **Dp = new int*[c+1];
	for(int i = 0;i<=c;i++) {
		 Dp[i] = new int[k+1];
	}
		for(int i = 0;i<c + 1;i++) {
		 for(int j = 0;j<k + 1;j++) {
			Dp[i][j] = -1;
		}
	}
	
	cout<<binomialCoeff(c,k,Dp)<<endl;
	T--;
	}
	return 0;
}
