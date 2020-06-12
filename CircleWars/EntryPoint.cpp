#include "Game.h"
#include "GameFunctions.h"
#include "Player.h"



int main()
{
	Game game;
	Player player;
	bool programRunning = true;
	std::string userInput;
	bool gameRunning = true;

	while (programRunning)
	{
		std::cout << "\nTesting the event's that trigger at certain turns" << std::endl;
		std::cout << "\nEnter in 1 to begin testing, enter 2 to quit" << std::endl;
		std::getline(std::cin, userInput);

		if (userInput == "1")
		{
			while (gameRunning)
			{
				{
					game.TestingMultipleEvents();
					std::cout << player.damage << std::endl;
					std::cout << "\nPress enter key to progress the turn count" << std::endl;
					std::cout << "\nThe current turn count is: " << game.overallTurnCount << std::endl;
					game.overallTurnCount++;
					system("PAUSE");

				}
			}
		}
		else if (userInput == "2")
		{
			gameRunning = false;
			programRunning = false;
		}
	}
}