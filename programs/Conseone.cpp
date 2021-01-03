# include<bits/stdc++.h>
using namespace std;

void printString(char str[],int k,int n) {
	if(n==k) {
		str[n] == '\0';
		cout<<str<<" ";
		return;
	}
	else {
	
	if(str[n-1] == '0') {
		str[n] = '1';
		printString(str,k,n+1);
		str[n] = '0';
		printString(str,k,n+1);
	}
	if(str[n-1] == '1') {
		str[n] = '0';
		printString(str,k,n+1);
	}
}
	
}



void generateString(int k) {
	char Str[100];
	Str[0] = '0';
	printString(Str,k,1);
	Str[0] = '1';
	printString(Str,k,1);\
	
}


int main() {
	int k;
	cin>>k;
	generateString(k);
	return 0;
}
