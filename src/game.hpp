#ifndef GAME_H
#define GAME_H 

#include <string>
#include <vector>
#include <iostream>

#include "Player.hpp"
#include "Card.hpp"
#include "Intelligence.hpp"
#include "Agility.hpp"
#include "Strength.hpp"

const int CARD_COUNT = 4;

class Game
{
public:
	Game();
 	void add_player_card(int player_number, std::string card_name);
 	void play();

private:
	std::vector<Player*> players;
};

#endif
