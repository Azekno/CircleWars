#pragma once

class Game
{
public:
	char playerTurnDecision = 'x';
	bool gameWinLoseDecision = false;
	int overallTurnCount = 0;

	char gameBoard[10][10];


	void GameTurnDecision();
};