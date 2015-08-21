//board class
#include <iostream>

using namespace std;

class board
{
private: 
	char board[3][3];
public:
	void getmove(int move);
	void toggleplayer(char player);
	bool determineDraw();
	void drawboard();
	void printboard();
};

void board::drawboard()
{
	char board[3][3] =
	{
		{ '1','2','3' },
		{ '4','5','6' },
		{ '7','8','9' },
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}
void board::getmove(int move)
{
	char player = 'X';
	cout << "please enter the number on the"
		"empty space in which you'd like to move to"
		<< endl;
	cin >> move;

	if (move == 1)
	{
		board[0][0] = player;

	}
	else if (move == 2)
	{
		board[0][1] = player;
	}
	else if (move == 3)
	{
		board[0][2] = player;
	}
	else if (move == 4)
	{
		board[1][0] = player;
	}
	else if (move == 5)
	{
		board[1][1] = player;
	}
	else if (move == 6)
	{
		board[1][2] = player;
	}
	else if (move == 7)
	{
		board[2][0] = player;
	}
	else if (move == 8)
	{
		board[2][1] = player;
	}
	else if (move == 9)
	{
		board[2][2] = player;
	}
	else
	{
		cout << "invalid move"
			<< endl;
	}
}


