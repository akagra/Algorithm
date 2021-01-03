# include<bits/stdc++.h>
using namespace std;

int count(int n,int X[]) {
	if(n == 0) {
		return 0;
	}
	if(n == 1) {
		return 0;
	}
	if(X[n] != -1) {
		return X[n];
	}
	int maxval = 0;
	for(int i = 1;i<=n;i++) {
		maxval = max(maxval,max((n-i)*i,i*count(n-i,X)));
		X[n] = maxval; 
	}
	return X[n];
}




int main() {
	int X[100],n;
	cin>>n;
	for(int i = 0;i<=n;i++) {
		X[i] = -1;
	}
	X[0] = 0;
	X[1] = 0;
	cout<<count(n,X)<<endl;
	for(int i = 0;i<=n;i++) {
		cout<<X[i]<<"  ";
	}
	return 0;
}
