# include<bits/stdc++.h>
using namespace std;


int min(int X, int Y) {
	if(	X>Y) 
		return Y;
	else
		return X;
}

int minSteps(int arr[],int n) {
	
	if(n == 1) {
		return 0;
	}
	int cmp = INT_MAX;
	for(int i = n-2;i>=0;i--){
		if(i + arr[i]>= n-1) {
			int steps = minSteps(arr,i+1);
			if(cmp != steps) {
				cmp = min(cmp,steps + 1);
			}
		}
	}
	return cmp;
}




int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<minSteps(arr,n);
	return 0;
}
