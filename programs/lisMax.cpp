# include<bits/stdc++.h>
using namespace std;

int maxLis(int n,int arr[]) {
	int lis[100];
	for(int i = 0;i<n;i++) {
	
	lis[i] = arr[i];
	}
	for(int i = 0;i<n;i++) {
		for(int j = 0;j<i;j++) {
			if(arr[i]>arr[j] && lis[i]<lis[j] + arr[i]) {
				lis[i] = lis[j] + arr[i];
			}
		}
	}
	
	int maxv = 0;
	for(int i = 0;i<n;i++) {
		if(lis[i]>maxv) {
			maxv= lis[i];
		}
	}
	return maxv;
}












int main() {
	int n,arr[100];
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<maxLis(n,arr);
	return 0;
}
