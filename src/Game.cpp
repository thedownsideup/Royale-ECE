#include "game.hpp"

Game::Game()
{
	players.push_back(new Player);
	players.push_back(new Player);
}

void Game::add_player_card(int player_number, std::string card_name)
{
		if(card_name == "dragon")
		{
			players[player_number-1]->add_card(new Strength(70, 50, 30));
		}
		else if(card_name == "giant")
		{
			players[player_number-1]->add_card(new Strength(85, 30, 35));
		}
		else if(card_name == "archer")
		{
			players[player_number-1]->add_card(new Agility(35, 75, 40));
		}
		else if(card_name == "goblin")
		{
			players[player_number-1]->add_card(new Agility(50, 90, 10));
		}
		else if(card_name == "witch")
		{
			players[player_number-1]->add_card(new Intelligence(40, 30, 80));
		}
		else if(card_name == "ghost")
		{
			players[player_number-1]->add_card(new Intelligence(40, 40, 70));
		}
		else
		{
			std::cout << "There's no such creature." << std::endl;
		}
	
}
void Game::play()
{
	players[0]->fight(players[1]);
}
