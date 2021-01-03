# include<bits/stdc++.h>
using namespace std;

int CoverDis(int arr[],int n) {
	if(n<0) return 0;
	if(n==0||n==1) return 1;
	//if(n==2) return 2;
	arr[n] = CoverDis(arr,n-1) + CoverDis(arr,n-2) + CoverDis(arr,n-3);
	return arr[n];
}





int main() {
	int arr[100],n;
	cin>>n;
	cout<<CoverDis(arr,n);
	return 0;
}
