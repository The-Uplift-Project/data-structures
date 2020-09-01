/* Author:  Pratiksha */ 

#include<bits/stdc++.h>
using namespace std;

bool checkDraw(char matrix[3][3]){
	int i,j;
	// If a player is winning, then that is already checked through findWinningPlayer function.
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if(matrix[i][j]=='-')
			return false;
		}
	}
	return true;
}

int findWinningPlayer(char matrix[3][3], char symbols[3]){
	int i;
	
	// Check the rows
	for(i=0;i<3;i++){
		if(matrix[i][0] == matrix[i][1] && matrix[i][0] == matrix[i][2] && matrix[i][0] != '-'){
			if(matrix[i][0] == symbols[1])
			return 1;
			else
			return 2;
		}
	}
	
	// Check the columns
	for(i=0;i<3;i++){
		if(matrix[0][i] == matrix[1][i] && matrix[0][i] == matrix[2][i] && matrix[0][i] != '-'){
			if(matrix[0][i] == symbols[1])
			return 1;
			else
			return 2;
		}
	}
	
	// Check the diagnols
	if(matrix[0][0] == matrix[1][1] && matrix[0][0] == matrix[2][2] && matrix[0][0] != '-'){
		if(matrix[0][0] == symbols[1])
		return 1;
		else
		return 2;
	}
	
	if(matrix[0][2] == matrix[1][1] && matrix[0][2] == matrix[2][0] && matrix[0][2] != '-'){
		if(matrix[0][2] == symbols[1])
		return 1;
		else
		return 2;
	}
	
	// No winning player found
	return 0;
}

int findResult(int currPlayer,char matrix[3][3],char symbols[3]){
	int winningPlayer = findWinningPlayer(matrix,symbols);
	if(winningPlayer)
	return winningPlayer;
	if(checkDraw(matrix))
	return 0;
	
	int x,y;
	cout<<"Player "<<currPlayer<<" , enter row index and column index to fill in your symbol."<<endl;
	cin>>x>>y;
	
	while(x>2 || y>2 || matrix[x][y] != '-'){
		cout<<"Incoorect row index or column index entered. Enter again."<<endl;
		cin>>x>>y;
	}
	matrix[x][y] = symbols[currPlayer];
	cout<<"Updated Matrix"<<endl;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	return findResult(currPlayer%2 + 1, matrix, symbols);
}

Tic_Tac_Toe_Driver(){
	int choosePlayer = rand()%2 + 1;
	char symbols[3];
	cout<<"Player "<<choosePlayer<<", select a symbol between X and O"<<endl;
	cin>>symbols[choosePlayer];
	if(symbols[choosePlayer]=='X'){
		symbols[choosePlayer%2 + 1] = 'O';
	}
	else{
		symbols[choosePlayer%2 + 1] = 'X';
	}
	char matrix[3][3];
	int i,j;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			matrix[i][j] = '-';
		}
	}
	cout<<"Initial matrix state"<<endl;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
	int ans = findResult(choosePlayer,matrix,symbols);
	cout<<endl;
	if(ans==0)
	cout<<"Draw"<<endl;
	else
	cout<<"Player "<<ans<<" wins"<<endl;
	return 0;
}
