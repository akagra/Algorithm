# include<bits/stdc++.h>
using namespace std;

int cutSegments(int arr[],int s,int i,int wt[],int n) {
	if(i == n) {
		return 0;
	}
	if(s == 0) {
		return 1;
	}
	if(s<0) {
		return 0;
	}

	if(wt[s] != -1) {
		return wt[s];
	}
	else {
		int left =  cutSegments(arr,s - arr[i],i,wt,n);
		int right = cutSegments(arr,s,i+1 ,wt,n);
		return wt[s] =  max(1 + left,right);
	}
	
}







int main() {
	int arr[100],n,wt[100],s;
	cin>>s;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
		
	}
	wt[0] = 0;
	for(int i = 1;i<=s;i++) {
		wt[i] = -1;
	}
	cout<<cutSegments(arr,s,0,wt,n);
	return 0;
}
