#pragma once
#include "Game.h"
#include "Player.h"

/*This will include game events that will occur during the game e.g. increased spawn of weapons, armour, health
Other events can be if a player reachs a certain amount of strength compared to the other players/ai, depending on the difficulty
the player is on can decide how much limits is placed on the player/ai.

After a certain amount of turns pass some events can begin 
*/

void Game::TestEvent1()
{
	if (overallTurnCount == 3)
	{
		std::cout << "This event has triggered" << std::endl;
	}
}

void Game::TestEvent2()
{
	Player player;
	if (overallTurnCount == 5 && playerTurnDecision == 'x')
	{
		std::cout << "This event has triggered" << std::endl;
		std::cout << player.damage << std::endl;
		std::cout << "Player 1 has gained an excellent sword which increase damage by 20" << std::endl;
		player.damage += 20;
	}
}

void TestEvent3()
{

}

void TestEvent4()
{

}

void TestEvent5()
{

}

void Game::TestingMultipleEvents()
{
	TestEvent1();
	TestEvent2();
}