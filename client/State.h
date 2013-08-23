#pragma once

#include "Player.h"
#include <vector>

class State
{
public:
	State();
	
	int addPlayer(Player);   // vraca id (indeks)
	int size() const { return players.size(); }
	Player &operator[](int);

private:
	std::vector<Player> players;
};

