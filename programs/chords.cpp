# include<bits/stdc++.h>
using namespace std;

int chords(int n,int c[]) {
	if(n == 0||n ==1) {
		return 1;
	}
	if(n == 2) {
		return 2;
	}
	if(c[n] != 0) {
		return c[n];
	}
	else {
	for(int i = 0;i<n;i++) {
		 c[n] = c[n] + chords(i,c)*chords(n-i-1,c);
	}
	}
	return c[n];
}



int main() {
	int c[100],n;
	cin>>n;
	for(int i = 0;i<=n;i++) {
		c[i] = 0;
	}
	cout<<chords(n,c);
	return 0;
}
