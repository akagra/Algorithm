# include<bits/stdc++.h>
using namespace std;

void subsetsum(int arr[],int i,int n,int sum) {
	if(i>n) {
		cout<<sum<<endl;
		return;
		
	}
	else {
		subsetsum(arr,i+1,n,sum + arr[i]);
		subsetsum(arr,i+1,n,sum);
	}
}










int main() {
	int arr[100],sum=0,n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	subsetsum(arr,0,n-1,sum);
	
	return 0;
}
