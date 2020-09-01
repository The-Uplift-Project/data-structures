/* Author : Prince  Gupta ***/ 
/** Header Files" **/ 

#include<bits/stdc++.h>
#include"Guessing_game.cpp" 
#include"Rat in a maze.cpp"
#include"sudoku.cpp"
#include"SnakeGame.cpp"
#include"Tic Tac Toe Game.cpp"
using namespace std;

/******* Display Choices Gunction ********** */ 
void showChoices()
{
	cout << "\t \t \t\t \t MENU" <<endl<<endl<< endl;
	cout << "\t1: Guessing Game  " << endl;
	cout << "\t2: Rat in a Maze " << endl;
	cout << "\t3: Snake Game " << endl;
	cout << "\t4: Sudoku Solver " << endl;
    cout << "\t5: Tic Tac Toe Game "<<endl;
	cout << "\t6: Exit " << endl;
	cout << "\tWhich Game do you want to play?  :";
}
 					   /*** Driver fUnction **/ 
int main()
{
	int choice;
	do
	{
		showChoices();
		cin >> choice;
		switch (choice)
		{
		case 1: Guessing_Game_Driver();
			break;
		case 2:Rat_Maze_Driver();
			break;
		case 3:Snake_Game_Driver();
			break;
		case 4:Sudoku_Solver();
			break;
		case 5:Tic_Tac_Toe_Driver();
			break;
        case 6: break;
		default:
			cout << "Invalid input" << endl;
		}
	}while (choice != 6);

	return 0;
}
