# include<bits/stdc++.h>
using namespace std;

string replace(string input,int i,int n,string output) {
	
	if(i == n-1) {
		return;
	}
	else if(i<n) {
	
	 if(input[i] == 'p' && input[i+1] == 'i') {
		 output = output + "3.14";
		 i = i+1;
	 }
	 else 
		 output = output + input[i];
    }
	replace(input,i+1,n,output);
	return output;
		
}

int main() {
	string str,output;
	int i = 0;
	getline(cin,str);
	int n = str.size();
	string input = replace(str,i,n-1,output);
	for(int i = 0;i<input.size();i++) {
		cout<<input[i];
	}
	return 0;
}
