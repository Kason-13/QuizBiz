#include "Resume.h"

void Resume::incrementBonneRep(){
	++bonneRep;
}

void Resume::addScore(int plusScore) {
	score += plusScore;
}

void Resume::setNbrQuestion(int nbr) {
	nbrQuestion = nbr;
}

int Resume::getScore() {
	return score;
}
int Resume::getBonneRep() {
	return bonneRep;
}
int Resume::getNbrQuestion() {
	return nbrQuestion;
}

void Resume::resetScore() {
	score = 0;
}

void Resume::resetBonneRep() {
	bonneRep = 0;
}