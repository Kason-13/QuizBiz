#pragma once
#include "Question.h"
#include <vector>
#include <string>
#include "ValidatorChoixRep.h"

class QuestionChoixRep : public Question {

public:
	QuestionChoixRep(std::string question, std::vector<std::string> choix, int indexRep,int points)
		:Question(new ValidatorChoixRep)
	{
		mQuestion = question;
		mChoixReps = choix;
		mReponse = indexRep;
		mPoints = points;
	}
	~QuestionChoixRep() override = default;

	//overrides
	int getPoint() override{
		return mPoints;
	}

	void setReponse() override {
		((ValidatorChoixRep*)mValidator)->setReponse(mReponse);
	}

	void affichageInstruction() override {
		std::cout << "\nChoisir une des reponses suivantes en indiquant l'index\n";
		for (size_t index{}; index < mChoixReps.size(); ++index)
			std::cout << index + 1 << ": " << mChoixReps.at(index) << "\n";
	}
private:
	int mReponse = 0;
	std::vector<std::string> mChoixReps;
	int mPoints = 0;
};