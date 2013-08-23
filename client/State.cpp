#include "State.h"


State::State(void)
{
	// nothing to do here
}

int State::addPlayer(Player p)
{
	players.push_back(p);
	return players.size() - 1;
}

Player &State::operator[](int i)
{
	if(i < 0 || i >= size()) ; // TODO: exception
	return players[i];
}