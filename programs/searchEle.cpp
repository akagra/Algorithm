# include<bits/stdc++.h>
using namespace std;
int searchEle(int arr[],int n,int sum =INT_MAX) {
	if(n==0) {
		return sum;
	}
	else{
	
		
		if(arr[n]<sum) {
		
		 	sum = arr[n];
	}
	return searchEle(arr,n-1,sum);
   }
}
int main(){
	int arr[100],n;
	cin>>n;
	for(int i =0;i<n;i++) {
		cin>>arr[i];
	}
	cout<<searchEle(arr,n-1);
	return 0;
}

