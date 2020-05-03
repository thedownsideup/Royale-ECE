#ifndef CARD_H
#define CARD_H

class Agility;
class Intelligence;
class Strength;

class Card
{
public:
	virtual Card* call_shenanigans(Card* other) = 0;
	virtual Card* fight(Agility* other) = 0;
	virtual Card* fight(Intelligence* other) = 0;
	virtual Card* fight(Strength* other) = 0;

	int intelligence;
	int agility;
	int strength;
};

#endif
