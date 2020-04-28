#pragma once
#include "Question.h"
#include <vector>
#include <string>
#include "ValidatorChoixRep.h"

class QuestionChoixRep : public Question {

public:
	QuestionChoixRep(std::string question, std::vector<std::string> choix, int indexRep,ValidatorChoixRep *validatorChoixRepPtr)
	{
		mQuestion = question;
		mChoixReps = choix;
		mReponse = indexRep;
		validator = validatorChoixRepPtr;
	}
	~QuestionChoixRep() override = default;

	//overrides
	void setReponse() override {
		((ValidatorChoixRep*)&validator)->setReponse(mReponse);
	}
	void affichageInstruction() override {
		std::cout << "\nChoisir une des reponses suivantes en indiquant l'index\n";
		for (int index{}; index < mChoixReps.size(); ++index)
			std::cout << index + 1 << ": " << mChoixReps.at(index) << "\n";
	}
private:
	int mReponse = 0;
	std::vector<std::string> mChoixReps;
};