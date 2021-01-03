# include<bits/stdc++.h>
using namespace std;


int pangram(string str1) {
	int index[27];
	int point;
	char b;
	for(int i = 0;i<=27;i++) {
		index[i] = 0;
	}
	for(int i = 0;i<str1.length();i++) {
		point = 27;
		if(str1[i] >= 'a'&& str1[i]<='z') {
			point = str1[i] - 'a';
		}
		else if(str1[i] >= 'A' && str1[i] <= 'Z') {
			point = str1[i] - 'A';
		}
		index[point] = 1;
		
	}
	for(int i = 0;i<27;i++){
		cout<<index[i];
	} 
	for(int i = 0;i<27;i++) {
		if(index[i] == 0) {
			b = (char)(i + 'a');
			cout<<b;
		}
	}
	
	return 0;
}

int main() {
	string str;
	int c;
	getline(cin,str);
	c = pangram(str);
	if(c) {
		cout<<"Pangram";
	}
	else {
		cout<<"not a pangram";
	}

	return 0;
	
}
