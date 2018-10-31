/******************************************
** Author : Jon Raleigh
** Date : 3/8/17
** Description : Class Board, which represents a
** tic-tac-toe board, contains a 3x3 array as a data
** member, which stores the locations of the player's 
** moves
***********************************************/
#include <iostream>
#include <string>
#include "Board.hpp" 

using namespace std;

/**************************************************************
** Description: default constructor sets all array members 
** 		to "." per example.
**************************************************************/
Board::Board()
{
	for (int i=0; i<3; i++)
	  {
		for (int j=0; j<3; j++)
		  {
			moveLocation[i][j] = ".";
		  }
	  }
}

/*************************************************************
** Description: If cell is empty (".") adds value to array, 
**		changes the player, and returns true,  else 
**		returns false. 
***********************************************************/

bool Board::makeMove(int column, int row, char *currPlayer)
{
	if (moveLocation[column][row] == ".")
	  {
		if (*currPlayer == 'x')
		  {playerInput = "x";}
		else playerInput = "o";

	 	moveLocation[column][row] = playerInput;
	
		if (*currPlayer == 'x')
		  {*currPlayer = 'o';}
		else {*currPlayer = 'x';};

		return true;
	  }
	return false;		

}

/*************************************************************
** Description: Sets up the conditions for various game states
**		by looking through the arrays for sets of
**		xs or os. I could iterate for rows and columns
** 		but listed all conditions for diagonal. 
***********************************************************/

int Board::gameState()
{
	//checks rows 
	for (int i=0; i<3; i++)
	  {
		if ((moveLocation[i][0] == moveLocation[i][1] && moveLocation[i][1] == 
		moveLocation[i][2] && moveLocation[i][2] == "x") || (moveLocation[0][i] 
		== moveLocation[1][i] && moveLocation[1][i] == moveLocation[2][i] && 
		moveLocation[2][i] == "x"))
		  {return X_WON;}
		else if ((moveLocation[i][0] == moveLocation[i][1] && moveLocation[i][1] == 
		moveLocation[i][2] && moveLocation[i][2] == "o") || (moveLocation[0][i] == 
		moveLocation[1][i] && moveLocation[1][i] == moveLocation[2][i] &&
		moveLocation[2][i] == "o"))  
		  {return O_WON;}
	  }

	//check diagonal 
	if ((moveLocation[0][0] == moveLocation[1][1] && moveLocation [1][1]== 
	moveLocation[2][2] && moveLocation[2][2] == "x") || (moveLocation[0][2] == 
	moveLocation[1][1] && moveLocation[1][1] == moveLocation[2][0] &&
	moveLocation[2][0] == "x"))
	  {return X_WON;}
	else if ((moveLocation[0][0] == moveLocation[1][1] && moveLocation[1][1] == 
	moveLocation [2][2] && 	moveLocation[2][2] == "o") || (moveLocation[0][2] == 
	moveLocation[1][1] && moveLocation [1][1] == moveLocation[2][0] &&
	moveLocation[2][2] == "o"))
	  {return O_WON;}
 
	//checks columns and rows for .s
	for (int i=0; i<3; i++)
	  {
		for (int j=0; j<3; j++)
		  {
			if (moveLocation[i][j] == ".")
				return UNFINISHED;
		  }
	  }		

	//checks for no empty spaces
	for (int i=0; i<3; i++)
	  {
		for (int j=0; j<3; j++)
		  {
			if (moveLocation[i][j] != ".")
				return DRAW;
		  }
	  }	
	 
	  	 
}

/**************************************************************
** Description: Prints the current values of the arrays. 		
**************************************************************/

string Board::print()
{
	cout 
		<< "  0 1 2 " << "\n0 " 
		<< moveLocation[0][0] << " " 
		<< moveLocation[0][1] << " " 
		<< moveLocation[0][2] << "\n1 " 
		<< moveLocation[1][0] << " " 
		<< moveLocation[1][1] << " " 
		<< moveLocation[1][2] << "\n2 " 
		<< moveLocation[2][0] << " " 
		<< moveLocation[2][1] << " " 
		<< moveLocation[2][2] 
		<< endl;
}

