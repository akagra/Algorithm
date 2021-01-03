# include<bits/stdc++.h>
using namespace std;

int main() {
	stack<char> s;
	int count = 0;
	string str;
	getline(cin,str);
	char x;
	for(int i = 0;i<str.length();i++) {
		if(str[i] == '{' ||str[i] == '['||str[i] == '(') {
			s.push(str[i]);
		}
	
	
	else{
		switch (str[i]) {
			case ')':
				x = s.top();
				s.pop();
				if(x == '{' || x == '[') {
					cout<< "unbalanced";
				}
					break;
				
			case '}':
				x = s.top();
				s.pop();
				if(x == '(' || x == '[') {
					cout<< "unbalanced";
				}
					break;
				
			case ']':
				x = s.top();
				s.pop();
				if(x == '(' || x == '{') {
					cout<< "unbalanced";
				}
					break;
					
				
		}
	}
	if(s.empty()) {
		count++;
	}
	
}
if(count>0) {
		cout<<"balanced";
	}
	else
		cout<<"unbalanced";
	return 0;
}
