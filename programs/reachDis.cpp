# include<bits/stdc++.h>
using namespace std;
int ReachDistance2(int n,int dis[]) {
	if(n==0) {
		return 1;
	}
	if(n<0) {
		return 0;
	}
	if(dis[n]!=-1) {
		return dis[n];
	}
	dis[n] =  ReachDistance2(n-10,dis);
	return dis[n];
}
int ReachDistance1(int n,int dis[]) {
	if(n==0) {
		return 1;
	}
	if(n<0) {
		return 0;
	}
	if(dis[n]!=-1) {
		return dis[n];
	}
	dis[n] =  ReachDistance1(n-5,dis)  +ReachDistance2(n-10,dis);
	return dis[n];
}
int ReachDistance(int n,int dis[]) {
	if(n==0) {
		return 1;
	}
	if(n<0) {
		return 0;
	}
	if(dis[n]!=-1) {
		return dis[n];
	}
	dis[n] = ReachDistance(n-3,dis) + ReachDistance1(n-5,dis)  +ReachDistance2(n-10,dis);
	return dis[n];
}





int main() {
	int n,dis[100];
	cin>>n;
	for(int i = 0;i<=n;i++) {
		dis[i] = -1;
	}
	
	cout<<ReachDistance(n,dis)<<endl;
	for(int i = 0;i<=n;i++) {
		cout<<dis[n]<<" ";
	}
	return 0;
}
