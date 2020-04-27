#pragma once
class Resume {
public:
	void incrementBonneRep();
	void addScore(int plusScore);


private:
	int score = 0;
	int numQuestions;
	int bonneRep = 0;
};