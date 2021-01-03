# include<bits/stdc++.h>
using namespace std;
int fib[100];

int fibSeries(int n) {
	/*if(n==0||n==1) {
		return 1;
	}*/
	if(fib[n]!=-1) {
		return fib[n];
	}
	else{
	
		fib[n] = fibSeries(n-1) + fibSeries(n-2);
	return fib[n];
}

}


int main() {
	int n;
	cin>>n;
	fib[0] = 1;
	fib[1] = 1;
	for(int i = 2;i<n+1;i++) {
		fib[i] = -1;
	}
	fibSeries(n);
	for(int i = n;i >= 0;i--) {
		cout<<fib[i]<<" ";
	}
	return 0;
}
