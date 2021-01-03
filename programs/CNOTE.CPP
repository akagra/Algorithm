# include<bits/stdc++.h>
using namespace std;

int main(){
	int T,flag;
	cin>>T;
	while(T > 0) {
		int P[1000000];
		int C[1000000];
		int X,Y,K,N;
		flag = 0;
		cin>>X>>Y>>K>>N;
		for(int i =0;i<N;i++) {
			cin>>P[i]>>C[i];
		}
		for(int i =0;i<N;i++) {
		
			if(P[i] >= (X-Y)) {
			
			   if(K>= C[i]) {
				flag = 1;
				break;
			}
		 }
		}
	
	
		if (flag == 1) {
			cout<<"LuckyChef"<<"\n";
		
		}
		else {
			cout<<"UnluckyChef"<<"\n";
		}
	T--;
}
	return 0;
}
