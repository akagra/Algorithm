# include<bits/stdc++.h>
using namespace std;

std::vector<char>str1;
std::vector<char>final;

void prints() {
	for(int i = final.size() -1;i>=0;i--) {
		cout<<final[i];
	}
}
int subStr(string A,string B,int m,int n) {
	if(m<0||n<0) {
		
		return 1;
	}
	if(A[m] == B[n]) {
		str1.push_back(A[m]);
		subStr(A,B,m-1,n-1);
	}
	if(A[m] != B[n]) {
		
		if(str1.size()>final.size()) {
			final.clear();
			final = str1;
		}
		str1.clear();
	}
	subStr(A,B,m-1,n);
	subStr(A,B,m,n-1);
}



int main() {
	string A,B;
	getline(cin,A);
	getline(cin,B);
	int m = A.length();
	int n = B.length();
	if(subStr(A,B,m-1,n-1)) {
		prints();
	} 
	return 0;
}
