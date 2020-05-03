#ifndef STRENGTH_H
#define STRENGTH_H

#include "Card.hpp"

class Strength : public Card
{
public:
	Strength(int strength, int agility, int intelligence);
	Card* call_shenanigans(Card* other);
	Card* fight(Agility* other);
	Card* fight(Intelligence* other);
	Card* fight(Strength* other);
};

#endif

