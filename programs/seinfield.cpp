# include<bits/stdc++.h>
using namespace std;

int main() {
	int n = 0;
	string str;
	getline(cin,str);
	while(str[0] != '-') {
		stack<char> st;
		int count1 = 0,count2 = 0,temp = 0;
		for(int i = 0;i<str.length();i++) {
		
			if(str[i] == '{') {
				st.push(str[i]);
				count1++;
			}
			else if(str[i] == '}' && (st.top() == '}' || st.empty())) {
				st.push(str[i]);
				count2++;
			}
			else if(str[i] == '}' && st.top() == '{') {
				st.pop();
				count1--;
			}
		}
		if(count1 % 2==0 && count2 % 2 == 0) {
			temp = (count1 + count2)/2;
		}
		if(count1 % 2==1 && count2 % 2 == 1) {
			temp = (count1 + count2 + 2)/2;
		}
		n++;
		
		cout<<n<<"."<<temp<<endl;
		getline(cin,str);
	}
	return 0;
}
