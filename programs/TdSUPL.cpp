# include<bits/stdc++.h>
using namespace std;
# define MAX 1000000
vector<bool> v(1000000,true);
long long int mark[1000000];
int main() {
		
	v[0] = false;
	v[1] = false;
	v[2] = true;
	for(long int i = 4;i<=MAX;i = i+2) {
		v[i] = false;
	}
	for(long long int i = 2;(i*i)<=MAX;i++) {
		if(v[i]) {
			for(long long int j = i*i;j<=MAX;j = j+(2*i)) {
				v[j] = false;
			}
		}
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	int T;
    
    
	
	scanf("%d",&T);
	while(T!=0) {
		long int i,j,k,count,x = 0,n;
	    
		scanf("%ld",&n);
		

	
	
	
	for(i = 0;i<=n;i++) {
		if(v[i]) {
			count = 1;
			k = i;
			while(k!=0 && v[k]) {
				count = 0;
				if(k%10==0) {
					count++;
				}
				k = k/10;
			}
			if(count == 0) {
				x++;
			}
			
		}
	}
	printf("%d\n", x);
		T--;
}
	return 0;
}
