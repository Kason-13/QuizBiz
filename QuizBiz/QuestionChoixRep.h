#pragma once
#include "Question.h"
#include <vector>
#include <string>

class QuestionChoixRep : public Question {

public:
	QuestionChoixRep(std::string question, std::vector<std::string> choix, int indexRep)
	{
		mQuestion = question;
		mChoixReps = choix;
		mIndexRep = indexRep;
	}
	~QuestionChoixRep() override = default;
	void affichageInstruction() override {
		std::cout << "\nChoisir une des reponses suivantes en indiquant l'index\n";
		for (int index{}; index < mChoixReps.size(); ++index)
			std::cout << index + 1 << ": " << mChoixReps.at(index) << "\n";
	};
private:
	int mIndexRep = 0;
	std::vector<std::string> mChoixReps;
};