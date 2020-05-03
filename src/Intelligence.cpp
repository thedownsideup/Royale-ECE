#include "Agility.hpp"
#include "Strength.hpp"
#include "Intelligence.hpp"

#include <cmath>
#include <cstdlib>

Intelligence::Intelligence(int strength, int agility, int intelligence)
{
	this->strength = strength;
	this->agility = agility;
	this->intelligence = intelligence;
}

Card* Intelligence::call_shenanigans(Card* other)
{
	return other->fight(this);
}

Card* Intelligence::fight(Agility* other)
{
	if(this->strength > other->strength)
	{
		this->intelligence+=10;
		this->agility+=10;
		if(this->intelligence > MAX)
		{
			this->intelligence = MAX;
		}
		if(this->agility > MAX)
		{
			this->agility = MAX;
		}
		return this;
	}
	else if(this->strength < other->strength)
	{
		other->intelligence+=10;
		other->agility+=10;
		if(other->intelligence > MAX)
		{
			other->intelligence = MAX;
		}
		if(other->agility > MAX)
		{
			other->agility = MAX;
		}
		return other;
	}
	else 
	{
		int winner = rand() % 2;
		if(winner = 0)
		{
			return this;
		}
		else return other;
	}
}

Card* Intelligence::fight(Intelligence* other)
{
	if(abs(this->intelligence - other->intelligence) <= 20)
	{
		if(this->intelligence > other->intelligence)
		{
			this->agility+=5;
			this->strength+=5;
			if(this->strength > MAX)
			{
				this->strength = MAX;
			}
			if(this->agility > MAX)
			{
				this->agility = MAX;
			}

			return this;
		}
		else if(this->intelligence < other->intelligence)
		{
			other->agility+=5;
			other->strength+=5;
			if(other->strength > MAX)
			{
				other->strength = MAX;
			}
			if(other->agility > MAX)
			{
				other->agility = MAX;
			}
			return other;
		}
	}
	else if((this->agility + this->strength) > (other->agility + other->strength))
	{
		this->agility+=5;
		this->strength+=5;
		if(this->strength > MAX)
		{
			this->strength = MAX;
		}
		if(this->agility > MAX)
		{
			this->agility = MAX;
		}
		return this;
	}
	else if((this->agility + this->strength) < (other->agility + other->strength))
	{
		other->agility+=5;
		other->strength+=5;
		if(other->strength > MAX)
		{
			other->strength = MAX;
		}
		if(other->agility > MAX)
		{
			other->agility = MAX;
		}
		return other;
	}

	else 
	{
		int winner = rand() % 2;
		if(winner = 0)
		{
			return this;
		}
		else return other;
	}
}

Card* Intelligence::fight(Strength* other)
{
	if(this->agility > other->agility)
	{
		this->strength+=10;
		if(this->strength > MAX)
		{
			this->strength = MAX;
		}
		return this;
	}
	else if(this->agility < other->agility)
	{
		other->strength+=10;
		if(other->strength > MAX)
		{
			other->strength = MAX;
		}
		return other;
	}
	else 
	{
		int winner = rand() % 2;
		if(winner = 0)
		{
			return this;
		}
		else return other;
	}
}
