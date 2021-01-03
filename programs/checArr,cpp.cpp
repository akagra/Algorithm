# include<bits/stdc++.h>
using namespace std;

int checArr(int arr[],int n,int i) {
	if(i == n) {
		return 1;
	}
	if(arr[i]>arr[i+1]) {
		return 0;
	}
	checArr(arr,n,i+1);
}

int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	if(checArr(arr,n-1,0)) {
		cout<<"yes";
	}
	else 
		cout<<"no";
	return 0;
}
