#include<bits/stdc++.h>
using namespace std;

int powFun(int a,int n) {
	if(n == 0) {
		return 1;
	}
	else
		return(a*powFun(a,n-1));
}

int main() {
	int n,a;
	cin>>a>>n;
	cout<<powFun(a,n);
	return 0;
	
}
