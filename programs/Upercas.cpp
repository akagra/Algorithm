# include<bits/stdc++.h>
using namespace std;

int firstUppercase(string str,int n,int i) {
	if(n==i) 
		return -1;
	else if(isupper(str[i])) {
		return i;
	}
	else if(!isupper(str[i])) {
	
		return firstUppercase(str,n,i+1);
	}
}








int main() {
	string str;
	cin>>str;
	int j = firstUppercase(str,(str.length() - 1),0);
	cout<<str[j];
	return 0;
}
