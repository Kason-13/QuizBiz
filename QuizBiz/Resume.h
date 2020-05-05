#pragma once
class Resume {
public:
	void incrementBonneRep();
	void addScore(int plusScore);
	void setNbrQuestion(int nbr);
	int getScore();
	int getBonneRep();
	int getNbrQuestion();
	void resetScore();
	void resetBonneRep();

private:
	int score = 0;
	int bonneRep = 0;
	int nbrQuestion = 0;
};