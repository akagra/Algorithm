
# include<bits/stdc++.h>
# define n 4

using namespace std;


bool isSafe(int board[n][n],int row,int col) {
	int i,j;
	for( i = 0;i<col;i++) {
		if(board[row][i]) {
			return false ;
		}
	}
	for(i = row,j = col;i>=0 && j>=0;i--,j--) {
		if(board[i][j]) {
		
			return false;
		}
	}
	for(i = row,j = col;j>=0 && i<n;i++,j--) {
		if(board[i][j]) {
		 
			return false;
		}
   }
	return true;
}



bool solveProblem(int board[n][n],int col) {
	if(col>= n) {
		return true;
	}
	for(int i = 0;i<n;i++) {
		if(isSafe(board,i,col)) {
			board[i][col] = 1;
			if(solveProblem(board,col + 1)) {
				return true;
			}
			board[i][col] = 0;
 
		 }		
	}
	return false;
}


void printSol(int board[n][n]) {
	for(int i = 0;i<n;i++) {
		cout<<endl;
		for(int j = 0;j<n;j++) {
			cout<<board[i][j]<<" ";
		}
	}
}







void solveQueen() {
	int board[4][4];
	for(int i =0;i<4;i++) {
		for(int j =0;j<4;j++) {
		
		board[i][j] = 0;
	}
	}
	if(solveProblem(board,0) == false) {
		cout<<"soln doesnt exist";
	}
	else
		printSol(board);
}



int main() {
	solveQueen();
	return 0;
}
