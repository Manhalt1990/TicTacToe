#include <iostream>
#include <board.h>
#include <Player.h>
using namespace std;
//declare variables
//X and Y position
int x = 0;
int o = 0;
//Keeps track of current square
int cursquare = 0;
int p1move;
int p2move;

/*instantiate the board class
and draw the board
*/


int main() {



	cout << "Hello and welcome to Tic Tac Toe!" 
	"Player 1 will be X "
	"Player 2 will be O" << endl;
	cout << " X goes first! Please enter a position on the board from 1-9" << endl;
	cin >> p1move;
	cout << "Your move player 2!" << endl;
	cin >> p2move;


	system("pause");
	return 0;
}
