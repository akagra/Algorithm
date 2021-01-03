# include<bits/stdc++.h>
using namespace std;
int bol[100];
int lis(int arr[],int n) {
	//int bol[n];
	bol[0] =1;
	for(int i = 0;i<n;i++) {
		bol[i] = 1;
		for(int j = 0;j<n;j++) {
			if(arr[j]<arr[i] && bol[i]<bol[j] + 1) {
				bol[i] = bol[i] + 1;
			}
		}
	}
	int maxv = 0;
	for(int i = 0;i<n;i++) {
		if(bol[i]>maxv) {
			maxv = bol[i];
		}
	}
	return maxv;
}





int main() {
	int n,arr[100];
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	cout<<lis(arr,n);
	
	return 0;
}
