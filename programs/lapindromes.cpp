# include<bits/stdc++.h>
using namespace std;


int lapindrome(string str) {
	int alpha[26],count,count2 = 0,temp,index,freq1[26],freq2[26];
		
		for(int i = 0;i<26;i++) {
			alpha[i]  = 0;
			freq1[i] = 0;
			freq2[i] = 0;
		}
		if(str.length()%2 == 0) {
			count = (str.length())/2;
		}
		else {
		
			count = (str.length()-1)/2;
		}
		
		if(str.length()%2==0) {
			temp = count + 1;
		}
		else {
			temp = count + 2;
		}
		for(int i = 0;i<count;i++) {
			index = str[i] - 'a';
			freq1[index]++;
			alpha[index] = 1;
		}
		
		for(int i =temp-1;i<=str.length();i++) {
			index = str[i] - 'a';
			freq2[index]++;
			alpha[index] = 1;
		}
	
		
		for(int i = 0;i<26;i++) {
			if(alpha[i] == 1){
				count2++;
				//cout<<count2;
			}
		}
		//cout<<count2<<endl;
		if(count2 != count){
			return 0;
		}
		else {
			for(int i =0;i<26;i++) {
				if(freq1[i] != freq2[i]) {
					return 0;
				}
			}
		}
	
		
		return 1;
		
	
}

int main() {
	int T;
	cin>>T;
//	fflush(stdin);
	while(T>0) {
		string str;
		int T2;
		getline(cin,str);
		T2 =lapindrome(str); 
		if(T2 == 1) {
			cout<<"YES"<<endl;
		}
		else if(T2 == 0){
			cout<<"NO"<<endl;
		}
		
		T--;
	}
	return 0;
}
