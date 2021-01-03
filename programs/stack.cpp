# include<bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	 while(n!=0) {
	 
		int arr[100],temp[100],j = 0,count = 0,count2 = 0;
		stack<int> st;
		for(int i = 0;i<n;i++) {
			cin>>arr[i];
		}
		for(int i = 0;i<n;i++) {
			if(i == (n-1)) {
			while(!st.empty()) {
				if(arr[i]>st.top() && count2 == 0) {
					temp[j] = st.top();
					st.pop();
					j++;
				}
				else {
					//st.push(arr[i]);
					if(j<i && count2 == 0) {
					count2++;
					temp[j] = arr[i];
					j++;
				}
				//temp[j] = arr[i];
					temp[j] = st.top();
					st.pop();
					j++;
				}
			}
			if(st.empty()) {
				temp[j] = arr[i];
				j++;
			}
		}
		else {
		
			if(arr[i]>=arr[i+1]) {
				while(!st.empty() && arr[i]>st.top()) {
					temp[j] = st.top();
					st.pop();
					j++;
				}
				st.push(arr[i]);
			}
			else {
				while(!st.empty() && arr[i]>=st.top()) {
					temp[j] = st.top();
					st.pop();
					j++;
				}
				
				temp[j] = arr[i];
				j++;
			}
		}
		
		
	}
	int a = 1;
/*	for(int i = 0;i<n;i++){
		cout<<temp[i];
	}*/
	for(int i = 0;i<n;i++) {
		if(temp[i] == a){
			a++;
		}
		else {
			count++;
		}
	}
	if(count == 0) {
		cout<<"yes"<<endl;
	}
	else{
		cout<<"no"<<endl;
	}
	cin>>n;
}
return 0;
}
