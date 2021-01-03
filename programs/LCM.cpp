# include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
	if(b==0) {
		return a;
	}
	else
		return gcd(b,a%b);
}




int main() {
	int T;
	cin>>T;
	while(T>0) {
		int a,b,c,d;
		cin>>a>>b;
		c = gcd(a,b);
		d = (a*b)/c;
		cout<<c<<" "<<d<<endl;
		T--;
	}
	return 0;
 }
