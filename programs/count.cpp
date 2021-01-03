# include<bits/stdc++.h>
using namespace std;

int count(int n,int c[]) {
	if(n == 0){
		return 1;
	}
	if(n == 1) {
		return 1;
	}
	else if(n == 2) {
		return 2;
	}
	if(c[n] != -1) {
		return c[n]; 
	}
	else {
		return c[n] = count(n-1,c) + count(n-2,c) +  count(n-3,c);
	}
	
}




int main() {
	int n,c[100];
	cin>>n;
	for(int i = 0;i<=n;i++) {
		c[i] = -1;
	}
	cout<<count(n,c);
	return 0;
}
