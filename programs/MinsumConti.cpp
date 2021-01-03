# include<bits/stdc++.h>
using namespace std;

int MaxContiArr(int arr[],int n) {
	int minSum = arr[0];
	int CurrSum = arr[0];
	for(int i = 1;i<n;i++) {
		CurrSum = min(arr[i],CurrSum + arr[i]);
		if(CurrSum<minSum) minSum = CurrSum;
	}
	return minSum;
}


int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<MaxContiArr(arr,n);
	return 0;
}
