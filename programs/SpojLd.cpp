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
	//long int T,e = 0;
	//cin>>T;
	//while(T>e) {
		int flag =0;
		long int a,b,c,d = 0;
		cin>>a>>b>>c;
		if(a!=0 && b!=0 && c!=0) {
		d = gcd(a,b);
		//cout<<"gcd ="<<d<<endl;
		if(c%d == 0) {
			for(int i = 0;i<=(c/a);i++) {
				for(int j = 0;j<=(c/b);j++) {
					if (c == (a*i + b*j)) {
						flag = 1;
					}
				
				}
			}
			
		}
		if (flag == 1) {
			cout<<"Yes";
		}
		else 
			cout<<"No"<<endl;
		}
		else if(a == 0 || b == 0 || c == 0) {
			cout<<"No"<<endl;
		//}
		//e++; 
	}
	return 0;
}
