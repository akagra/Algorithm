# include<bits/stdc++.h>
using namespace std;
int countDer(int count[],int n) {
	if(n == 1) {
		return 0;
	}
	if(n == 2||n == 0) {
		return 1;
	}
	if(count[n]!= -1) {
		return count[n];
	}
	else {
		count[n] = (n-1) * (countDer(count,n-1) + countDer(count,n-2));
		return count[n];
	}
	
}
int main() {
	int Count[100000],n;
	cin>>n;
	for(int i = 0;i<=n;i++) {
		Count[i] = -1;
	}
	
	cout<<countDer(Count,n);
	return 0;
}
