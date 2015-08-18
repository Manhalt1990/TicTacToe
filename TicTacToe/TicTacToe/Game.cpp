#include <iostream>
using namespace std;

int x;
int o;
int p1move;
int p2move;
class Board;
int boardgame[3][3];

int main() {

	cout << "Hello and welcome to Tic Tac Toe!" 
	"Player 1 will be X "
	"Player 2 will be O" << endl;
	cout << " X goes first! Please enter a position on the board from 0-8" << endl;
	cin >> p1move;
	cout << "Your move player 2!" << endl;
	cin >> p2move;


	system("pause");
	return 0;
}
