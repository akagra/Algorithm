# include<bits/stdc++.h>
using namespace std;


void printArray(int arr2[],int l) {
	for(int i = 0;i<l;i++) {
		cout<<arr2[i];
	}
	cout<<endl;
}




void subSeq(int arr1[],int arr2[],int ss,int css,int n,int sum) {
	if(ss >=  n){
	
			printArray(arr2,css);
			cout<<"sum = "<<sum<<endl;
		
	}
	else {
		subSeq(arr1,arr2,ss+1,css,n,sum);
        arr2[css] = arr1[ss];	
		subSeq(arr1,arr2,ss+1,css + 1,n,sum + arr1[ss]);
		
		
		
	}
	return;
}


int main() {
	int arr1[] = {1,2,3};
	int arr2[100];
	
	subSeq(arr1,arr2,0,0,3,0);
	return 0;
 }
