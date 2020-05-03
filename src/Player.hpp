#ifndef PLAYER_H
#define PLAYER_H 

#include <vector>

#include "Card.hpp"

class Player
{
public:
 	void add_card(Card* card);
	bool the_war_is_over(Player* other);
	Player* fight(Player* other);
	Player* declare_winner(Player* other);

private:
	std::vector<Card*> cards;
};

#endif

