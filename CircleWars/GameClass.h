#pragma once

class GameClass
{
public:
	char playerTurnDecision = 'x';
	bool gameWinLoseDecision = false;

	void playerTurn();
};