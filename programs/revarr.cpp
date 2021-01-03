# include<bits/stdc++.h>
using namespace std;


int swap(int *x,int *y) {
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void revarr(int arr[],int n,int i) {
	if(i >=n) {
		return;
	}
	swap(arr[n],arr[i]);
	revarr(arr,n-1,i+1);
}

int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	int i = 0;
	revarr(arr,n-1,i);
	for(int i = 0;i<n;i++) {
		cout<<arr[i];
	}
	return 0;
}
