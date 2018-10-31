/******************************************
** Author : Jon Raleigh
** Date : 3/8/17
** Description : Class TicTacToe, which allows 
** two people to play a game.
**********************************************/
#include <iostream>
#include <string>
#include "TicTacToe.hpp"
#include "Board.hpp"

using namespace std;

//constructor

TicTacToe::TicTacToe(char player)
{
	currentPlayer = player;
} 


/***********************************************
** Description: Does the work of the program.
**		Loops until a win or draw 
**		condition is returned. Passes
**		X and Y coords & current player
**		to the Board object's functions.	 
**********************************************/
 
void TicTacToe::play()
{

	Board tBoard;

//LOOP BEGINS HERE. 	
 
	do	  
	  {
		tBoard.print();

		cout << "\nPlayer " << currentPlayer << 
		", please enter the X and Y coordinates of your move." 
		<< endl;

		cin >> xCoord >> yCoord;

		legalMove = tBoard.makeMove(xCoord, yCoord, &currentPlayer);

//legalMove holds the returns false if already taken and starts the gamestate function if not.
		
		if (legalMove == false)
		  {
			cout << "Already taken." << endl;
		  }			
		else 
		  {
			endCondition = tBoard.gameState();
		  } 
		
		if (endCondition == 0 )
		  {
			cout << "X wins!" << endl;
		  }
		else if (endCondition == 1)
		  {
			cout << "O wins!" << endl;
		  }
		else if (endCondition == 2)
		  {
			cout << "It's a draw!" << endl;
		  }
		  
	  } while ((tBoard.gameState()) == 3);
	
}

int main()
{
	string firstPlayerString;
	char firstPlayerPasser;	

	cout << "Who is playing first, x or o?" << endl;

	cin >> firstPlayerString;

	if (firstPlayerString == "x")
	  {firstPlayerPasser = 'x';}
	else if (firstPlayerString == "o")
	  {firstPlayerPasser = 'o';}
	else if (firstPlayerString != "x" && firstPlayerString != "o")
	  {
		cout << "x will go first." << endl;
		firstPlayerPasser = 'x';
	  }   

//created the passer to copy the string to char. I know there are more elegant ways 
//to do this, but we haven't covered string stream yet.
	
	TicTacToe game(firstPlayerPasser);

	game.play();

	return 0;
}
