#ifndef AGILITY_H
#define AGILITY_H

#include "Card.hpp"

class Agility : public Card
{
public:
	Agility(int strength, int agility, int intelligence);
	Card* call_shenanigans(Card* other);
	Card* fight(Agility* other);
	Card* fight(Intelligence* other);
	Card* fight(Strength* other);
};

#endif
