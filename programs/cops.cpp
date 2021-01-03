# include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T>0){
	     int x,y,M,temp,init = 0,count = 0,C,a;
	     int arr[100];
	     cin>>x>>y>>M;
		 for(int i = 0;i<x;i++){
		 	scanf("%d",&arr[i]);
		 }
		 sort(arr,arr+ x);	
		 temp = y*M;
		 for(int i =0;i<x;i++) {
		 	C = (arr[i] - 1) - temp;
		 	//cout<<C<<endl;
		 	if(C>init) {
		 		a = (C - init);
		 		count = count + a;
		 		//cout<<count<<endl;
			 }
			 init = arr[i] + temp;
		
			 
		 	if(arr[i] == arr[x-1]) {
		 	 	if(init < 100) {
		 	 		count = count + (100 - init);
		 	 		//cout << count<<endl;
				  }
			  } 
		 }
		 printf("%d\n",count);
		 T--;
	}
	return 0;
}
