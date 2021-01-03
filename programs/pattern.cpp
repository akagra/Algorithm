# include<bits/stdc++.h>
using namespace std;

int pattern(int n,int sum) {
	if (sum == n)
		return sum;
	if(sum<=0) {
		return 0;
	}
	cout<<sum<<endl;
	pattern(sum,sum-5);
	cout<<sum<<endl;
	pattern(sum,sum+5);
 }




int main() {
	int n;
	cin>>n;
	cout<<pattern(n,n-5);
	return 0;
}
