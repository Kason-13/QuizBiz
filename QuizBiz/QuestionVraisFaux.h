#pragma once
#include "Question.h" 
#include <string>
#include "ValidatorVraiFaux.h"

class QuestionVraisFaux : public Question {

public:
	QuestionVraisFaux(std::string question, bool reponse, int points)
		:Question(new ValidatorVraisFaux)
	{
		mQuestion = question;
		mReponse = reponse;
		mPoints = points;
	}
	~QuestionVraisFaux() override = default;

	//overrides
	int getPoint() override {
		return mPoints;
	}

	void setReponse() override {
		((ValidatorVraisFaux*)mValidator)->setReponse(mReponse);
	}

	void affichageInstruction() override {
		std::cout << "\nRepondez en inscrivant 'vrais' ou 'faux' / 'v' ou 'f' \n";
	}
private:
	bool mReponse = false;
	int mPoints = 0;
};