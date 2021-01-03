# include<bits/stdc++.h>

using namespace std;
# define MAX 100000000
long int arr[8000000];
vector<bool> v(MAX + 1,true);
int main() {
	
	
	long long int j;
	v[0] = false;
	v[1] = false;
	v[2] = true;
	for(long long int i = 4;i<=MAX;i= i+2) {
		v[i] = false;
	}
	for(long int i =2;i*i<=MAX;i++) {
		if(v[i]) {
			for(j = i*i;j<=MAX;j = j+(2*i)) {
				v[j] = false;
			}
		}
	}
		
	j = 0;
	arr[0] = 2;
	for(long long int i = 3;i<=MAX;i = i+2) {
		if(v[i]) {
			j++;
			arr[j] = i;
			
		}
	}

	for(long long int i = 1;i<=j;i=i+100) {
		cout<<arr[i-1]<<endl;
	}
	
	
	
	
	

	
	return 0;
}
