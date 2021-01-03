# include<bits/stdc++.h>
using namespace std;


int sumArr(int arr[],int n,int sum) {
	
	if(n<0) {
		return sum;
	}
	if(arr[n] % 2 == 0) {
		sum = sum+arr[n];
	}
	sumArr(arr,n-1,sum);
}

int main() {
	int arr[100],n; 
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	int sum = 0;
	cout<<sumArr(arr,n-1,sum);
	return 0;
}
