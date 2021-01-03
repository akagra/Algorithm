# include<bits/stdc++.h>
using namespace std;

int dp[100][100];

int isInterleav(string A,string B,string C,int i,int j,int k) {
	if((i<0 && j<0 && k<0)) {
		cout<<"S"<<endl;
		return 1;
	}

	
	if(A[i] == C[k] && B[j] != C[k]) {
		//dp[i][j] = 1;
	//	cout<<1<<endl;
		return  isInterleav(A,B,C,i-1,j,k-1);
	}
	else if(B[j] == C[k] && A[i] != C[k]) {
		//dp[i][j] = 1;
		
		return isInterleav(A,B,C,i,j-1,k-1);
	}
	else if(A[i] == C[k] && B[j] == C[k]){
		return isInterleav(A,B,C,i-1,j,k-1) || isInterleav(A,B,C,i,j-1,k-1); 
	}
	else if(A[i] != C[k] && B[j] != C[k]){
		return 0;
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
	cout<<isInterleav(A,B,C,(A.length()-1),(B.length()-1),(C.length()-1));
		for(int i = 0;i<=A.length();i++) {
			cout<<endl;
		for(int j = 0;j<=B.length();j++) {
			cout<<dp[i][j]<<"  ";
		}
	}
	return 0;
}
