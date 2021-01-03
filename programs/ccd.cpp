#include <bits/stdc++.h>
using namespace std;

void swap(int*a,int*b) {
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main() {
	int T;
	cin>>T;
	while(T > 0 ) {
	  //cout<<T;
    
        int N; 
		int arr[100];
        cin>>N;
        for(int i = 0;i<N;i++) {
            cin>>arr[i];
            //cout<<arr[i];
        }
        //cout<<arr[N-1];
        sort(arr,arr + N);
        /*for(int i = 0;i<N;i++) {
        	cout<<arr[i];
		}
		cout<<arr[N-1];*/
        int count = 0,temp,max = arr[N-1];
        while(arr[0] != arr[N-1]){
        	//cout<<"1";
            count++;
            temp = 0;
            for(int i = 0;i<N-1;i++) {
                arr[i]++;
                if(arr[i] > arr[temp]) {
                    temp = i;
                }
                if(arr[temp]>arr[N-1]) {
                    swap(&arr[temp],&arr[N-1]);
                    //cout<<arr[temp];
                    //cout<<arr[N-1];
                }
                //cout<<temp;
                //cout<<arr[N-1];
            }
        }
        cout<<count;
        
     	T--;
	}
        
    
	
	return 0;
}
