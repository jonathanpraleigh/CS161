/***************************************
** Author : Jon Raleigh
** Date : 3/8/17
** Description : Header file for TicTacToe
***************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP

#include <string>
#include "Board.hpp"

using namespace std;


class TicTacToe
{
private:
	char currentPlayer;
	char firstPlayer;
	int xCoord;
	int yCoord;
	int endCondition; 
	bool legalMove;
public:
	TicTacToe();
	TicTacToe(char);
	void play();

};

#endif
