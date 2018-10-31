/********************************************
** Author : Jon Raleigh
** Date : 3/8/17
** Description : Header file for Board Class 
**********************************************/
#ifndef BOARD_HPP
#define BOARD_HPP

#include <string>

using namespace std;

enum currentState {X_WON, O_WON, DRAW, UNFINISHED};

class Board
{
private:
	string moveLocation [3][3];
	char currPlayer;
	string playerInput;		
public:
	Board();
	bool makeMove (int, int, char*);
	int gameState();
	string print(); 
};
#endif 
