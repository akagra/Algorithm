# include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin>>T;
	while(T > 0){
		int N,K,temp = 0;
		int arr[100];
		cin>>N>>K;
		for(int i = 0;i<N;i++) {
			cin>>arr[i];
			arr[i] = arr[i] + K;
		}
		for(int i =0;i<N;i++) {
			if(arr[i] % 7 == 0) {
				temp++;
			}
		}
		cout<<temp;
		T--;
	}
	return 0;
}
