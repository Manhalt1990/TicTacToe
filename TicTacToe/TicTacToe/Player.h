#include <iostream>

using namespace std;

class Player
{
	public:
		string playerName;
		void setName(string name);
		string getName();
		string getPlayerType();
		Player(string xos);

	private:
		string playerType;
};

//Constructor
Player::Player(string xos)
{
	if (xos == "X" || xos == "x")
	{
		playerType = "X";
	}
	else if (xos == "O" || xos == "o")
	{
		playerType = "O";
	}
	else cout << "There was an error assigning the Player as an X or O." << endl;
}

void Player::setName(string name)
{
	playerName = name;
}

string Player::getName()
{
	return playerName;
}

string Player::getPlayerType()
{
	return playerType;
}
