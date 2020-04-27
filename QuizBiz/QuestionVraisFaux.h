#pragma once
#include "Question.h" 
#include <string>
#include "ValidatorVraiFaux.h"

class QuestionVraisFaux : public Question {

public:
	QuestionVraisFaux(std::string question, bool reponse, ValidatorVraisFaux *validatorPtr)
	{
		mQuestion = question;
		mReponse = reponse;
		validator = validatorPtr;
	}
	~QuestionVraisFaux() override = default;
	void affichageInstruction() override {
		std::cout << "/nRepondez en inscrivant 'vrais' ou 'faux' / 'v' ou 'f' ";
	}
private:
	bool mReponse = false;
};