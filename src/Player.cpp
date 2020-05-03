#include "Player.hpp"
#include <iostream>

void Player::add_card(Card* card)
{
	cards.push_back(card);
}

Player* Player::fight(Player* other)
{	
	while(!the_war_is_over(other))
	{
		Card* winner_card = this->cards[0]->call_shenanigans(other->cards[0]);
		if(winner_card == this->cards[0])
		{
			other->cards.erase(cards.begin());
		}
		else
		{
			this->cards.erase(cards.begin());
		}
	}

	return declare_winner(other);

}

bool Player::the_war_is_over(Player* other)
{
	if(this->cards.size() == 0 || other->cards.size() == 0)
	{
		return true;
	}
	else return false;
}

Player* Player::declare_winner(Player* other)
{
	if(this->cards.size() == 0)
	{
		return other;
	}
	else return this;
}