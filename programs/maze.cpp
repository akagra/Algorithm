# include<bits/stdc++.h>
#define n 4
using namespace std;


bool isSafe(int a[n][n],int x,int y) {
	if(x>=0 && x<n && y>=0 && y<n && a[x][y] == 1) {
		return true;
	}
	else
		return false;
}

bool solveMaze(int a[n][n],int x,int y,int sol[n][n]) {
	if(x == (n-1) && y==(n-1) && a[x][y] == 1) {
		sol[x][y] = 1;
		return true;
	}
	if(isSafe(a,x,y)) {
		
	sol[x][y] = 1;
    if(solveMaze(a,x +1,y,sol)) {
		return true;
	}	
	if(solveMaze(a,x,y + 1,sol)) {
		return true;
	}
	sol[x][y] = 0;
	return false;
}
return false;
	
}





int main() {
	int a[4][4],sol[4][4];
	
	for(int i = 0;i<4;i++) {
		for(int j =0;j<4;j++) {
			cin>>a[i][j];
			sol[i][j] = 0;
		}
	
	}
	if(solveMaze(a,0,0,sol)) {
	
	for(int i = 0;i<4;i++) {
		cout<<endl;
		for(int j =0;j<4;j++) {
			cout<<sol[i][j]<<" ";
		}
	
	}
}
else 
	cout<< "no solution";
	return 0;
}
