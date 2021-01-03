# include<bits/stdc++.h>
using namespace std;

int swap(int *X,int *Y) {
	int temp = *X;
	*X = *Y;
	*Y = temp;
}
void printarray(int arr[],int n) {
	for(int i = 0;i<=n;i++) {
		cout<<arr[i];
	}
}

void insertionSort(int arr[],int n,int i) {
	if(n==i) {
		return;
	}
	else{
		insertionSort(arr,n,i+1);
		for(int j = (i-1);j>=0;j--) {
			if(arr[i]<arr[j]) {
				swap(arr[j],arr[i]);
			}
		}
		
	}
}
int main() {
	int arr[100],n;
	cin>>n;
	for(int i = 0;i<n;i++) {
		cin>>arr[i];
	}
	insertionSort(arr,n,1);
	printarray(arr,n-1);
	return 0;
}
