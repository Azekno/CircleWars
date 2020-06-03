#pragma once

class GameClass
{
public:
	char playerTurnDecision = 'x';
	bool gameWinLoseDecision = false;
	int overallTurnCount = 0;

	void GameTurnDecision();
};