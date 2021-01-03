# include<bits/stdc++.h>
using namespace std;

int wrapPuzle(int sum,int wrap,int wrapcnt,int temp =0) {
	

	if(wrap == 0 || wrap<wrapcnt) {
		return sum;
	}
	
	else {
		temp = (wrap/wrapcnt);
	
		sum = sum + temp;
		if(temp!=0)wrap = (wrap%temp) + temp;
		return wrapPuzle(sum,wrap,wrapcnt,temp);
	} 
}






int main() {
	int m,pr,wrapcnt;
	cin>>m>>pr>>wrapcnt;
	int sum = m/pr;
	
	cout<<wrapPuzle(sum,sum,wrapcnt,0);
	return 0;
}
