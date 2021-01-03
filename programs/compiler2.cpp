# include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin>>T;
	cin>>ws;
	while(T !=0) {
		string str;
		getline(cin,str);
		/*for(int i = 0;i<str.length();i++) {
			cout<<str[i];
		}*/
		int count = 0,temp = 0,count2 = 0;
		stack<char> st;
		
	
		for(int i = 0;i<str.length();i++) {
			if(str[i] == '<' ) {
				
				st.push(str[i]);
			}
			
			
			else if(str[i]== '>' && !st.empty() ) {
				
				st.pop();
				count2 = count2 + 2;
			}
			else if(st.empty() && str[i] == '>') {
				break;
			}
			if(st.empty()) {
				temp = count2;
			}
			
		}
		
		cout<<temp<<endl;
		T--;
	}
 }
