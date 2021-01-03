# include<bits/stdc++.h>
using namespace std;

int strcons(int i,string str) {
	tolower(str[i]);
	if(str[i] == 'a' || str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
		return 0;
	else 
		return 1;
}



int countconst(string str,int n,int i) {
	if(i == n) {
		return i + 1;
	}
	else 
		return countconst(str,n,i+1);
}








int main() {
	string str;
	cin>>str;
	
	cout<<countconst(str,(str.length()-1),0);
	return 0;
}
