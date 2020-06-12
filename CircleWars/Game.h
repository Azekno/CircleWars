#pragma once
#include <iostream>
#include <string>

class Game
{
public:
	char playerTurnDecision = 'x';
	bool gameWinLoseDecision = false;
	int overallTurnCount = 1;

	char gameBoard[10][10];

	void TestEvent1();
	void TestEvent2();

	void GameTurnDecision();
	void TestingMultipleEvents();
};

void TestEvent3();
void TestEvent4();
void TestEvent5();