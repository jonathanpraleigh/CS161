/**********************************************
** Author: Jonathan Raleigh
** Date: 1/25/17
** Description : User assigns number, guesses, and then is told how many tries it took to reach the correct answer.
*********************************************/

#include <iostream>
using namespace std;

int main()
{

	int answer, guess, guessCounter = 1; //sets answer, guess, and sets gues
					     //s counter to 1 for first guess  

	cout << "Enter the number for the player to guess." << endl;
	cin >> answer;
	cout << "Enter your guess" << endl;
	cin >> guess;

	//initial guess before the loop begins

	while ( guess != answer )
	  {
		guessCounter = guessCounter +1; //adds 1 to guess counter
						//per loop
		if ( guess > answer )		 
		  {
			cout << "Too high - try again." << endl;
		  } 
		else if ( guess < answer )
		  {
			cout << "Too low - try again." <<  endl;
		  }
		cin >> guess; //input for guess prompts
	  }
	cout << "You guessed it in " << guessCounter << " tries." << endl;
	return 0;	//returns guessCounter and ends
}
