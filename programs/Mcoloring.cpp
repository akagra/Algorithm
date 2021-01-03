# include<bits/stdc++.h>
# define N 4

using namespace std;
int arr[N];

void Print(int arr[]) {
	for(int i = 0;i<N;i++) {
		cout<<arr[i];
	}
}


bool isSafe(int G[N][N],int i,int arr[],int v) {
	for(int j = 0;j<N;j++) {
		if(G[v][j] == 1  && arr[j] == i) {
			return false;
		}
	}
	return true;
}



bool solveGraph(int G[N][N],int m,int v,int arr[]) {
	if(v == N) {
		return true;
	}
	for(int i = 1;i<=m;i++) {
		if(isSafe(G,i,arr,v)) {
			arr[v] = i;
		if(solveGraph(G,m,v+1,arr) == true) {
			return true;
		}
			arr[v] = 0;
		}
		
	}
	return false;
}



int main() {
	int m = 3;
	 int G[4][4] ={{ 0, 1, 1, 1 }, 
        { 1, 0, 1, 0 }, 
        { 1, 1, 0, 1 }, 
        { 1, 0, 1, 0 },};
    for(int i = 0;i<N;i++) {
    	arr[i] = 0;
	}   
	//Print(arr); 
	if(solveGraph(G,m,0,arr) ==  false) {
		cout<<"soln does'nt exist";
	}
	else if(solveGraph(G,m,0,arr))
		Print(arr);
	
	
	return 0;
}
