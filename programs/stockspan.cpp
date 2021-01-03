# include<bits/stdc++.h>
using namespace std;

int main() {
	stack<int> st;
	int arr[100],n,s[100];
	cin>>n;
	for(int i =0;i<n;i++) {
		cin>>arr[i];
		s[i] = 0;
	}
	//s[-1] = 0;
	st.push(0);
	for(int i = 0;i<n;i++) {
		while(!st.empty()&& arr[i]>=st.top()) {
			st.pop();
			if(i>0) {
			s[i] = 0;
			}
			else
			    s[i] = s[i] + s[i-1];
		}
		//st.push(arr[i]);
		if(arr[i]<st.top() || st.empty()) {
			s[i] = s[i] + 1;
		}
		st.push(arr[i]);
	}
	for(int i = 0;i<n;i++) {
		cout<<s[i]<<"/n";
	}
	return 0;
}
