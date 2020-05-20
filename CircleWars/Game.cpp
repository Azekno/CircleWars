#include "GameClass.h"
#include "GameFunctions.h"

void GameClass::playerTurn()
{
	if (playerTurnDecision == 'x')
	{
		std::cout << "\nPlayer 1's Turn" << std::endl;
	}
	else if (playerTurnDecision == 'c')
	{
		std::cout << "\nPlayer 2's Turn" << std::endl;
	}
	else if (playerTurnDecision == 'v')
	{
		std::cout << "\nPlayer 3's Turn" << std::endl;
	}
}