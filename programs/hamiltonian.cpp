# include<bits/stdc++.h>
# define n 5
using namespace std;
int path[n + 1];

void Print() {
	for(int i = 0;i<n;i++) {
		cout<<path[i];
	}
} 


bool isSafe(bool G[n][n],int pos,int v) {
	if(G[path[pos-1]][v] == 0) {
		return false;
	}
	for(int i = 0;i<pos;i++) {
		if(path[i] == v) {
			return false;
		}
	}
	return true;
}



bool hamiPath(bool G[n][n],int pos) {
	
	if(pos == n) {
		if(G[path[pos-1]][path[0]] == 1) {
			return true;
		}
		else
			return false;
	}
	
	for(int i =1;i<n;i++) {
	
		if(isSafe(G,pos,i)) {
			path[pos] = i;
			
			if(hamiPath(G,pos + 1) == true ) {
				return true;
			}
			
			path[pos] = -1;
		}
	}
	return false;
	
}


int main() {
	bool G[5][5] = {{0, 1, 0, 1, 0},  
                        {1, 0, 1, 1, 1},  
                        {0, 1, 0, 0, 1},  
                        {1, 1, 0, 0, 1},  
                        {0, 1, 1, 1, 0}};  
	for(int i = 0;i<=n;i++) {
		path[i] = -1;
	}
    Print();
    if(hamiPath(G,0)){
		Print();
		}
	else 
		cout<<"solution doesn't exist";
	
}
