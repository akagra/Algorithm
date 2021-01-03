# include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0) {
		int arr[100],C,N,sum = 0;
	    cin>>N>>C;
	    for(int i =0;i<N;i++) {
	    	cin>>arr[i];
		}
		for(int i = 0;i<N;i++) {
			sum = sum + arr[i];
		}
		if(sum <= C) {
			cout<<"Yes"<<"\n";
		}
		else {
			cout<<"No"<<"\n";
		}
		T--;
	}
	return 0;
}
