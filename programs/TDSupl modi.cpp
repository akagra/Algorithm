# include<bits/stdc++.h>
using namespace std;
# define MAX 10000000

vector<bool> v(10000001,true);





void prime(){

	
    
	v[0] = false;
	v[1] = false;
	v[2] = true;
	for(long long int i = 4;i<=MAX;i = i+2) {
		v[i] = false;
	}
	for(long long int i = 2;(i*i)<=MAX;i++) {
		if(v[i]) {
			for(long long int j = i*i;j<=MAX;j = j+(2*i)) {
				v[j] = false;
			}
		}
	}
}

long long int mark[10000000];
void gen() {
	long long int i,j,q,z,K;
	for(i = 0;i<MAX;i++) {
		mark[i] = 0;
	}
	for(i = 0;(q = i*i)<MAX;i++) {
		for(j = 0;(z=j*j*j*j)<MAX;j++ ) {
			K = q+z;
			if(K<MAX && v[K]) {
				mark[K] = 1;
			}
 
		}
	}
	for(i = 1;i<=3;i++) {
		cout<<mark[i]<<endl;
	}
 
	mark[0] = 0;
	for(i = 1;i<=MAX;i++) {
		mark[i] = mark[i] + mark[i-1];
	}
}





int main() {
 	prime();
 	gen();

    int T;
	cin>>T;
	while(T!=0) {
		long long int n;
		cin>>n;
		cout<<mark[n]<<endl;
		T--;
	}
	return 0;
}

