# include<bits/stdc++.h>
using namespace std;

long int gcd(long int a,long int b) {
	if(b == 0) {
		return a;
	}
	else 
		return gcd(b,a%b);
}

int main() {
	long int T,e = 0;
	cin>>T;
	while(T>e) {
		long int a,b,c,d = 0;
		cin>>a>>b>>c;
		 
		d = gcd(abs(a),abs(b));
		if(c%d == 0) {
			cout<<"Case"<<" "<<(e+1)<<":"<<" Yes"<<endl;
		}
		else 
			cout<<"Case"<<" "<<(e+1)<<":"<<"No"<<endl;
		
		
		e++; 
	}
	return 0;
}
