#pragma once
#include "Question.h" 
#include <string>

class QuestionVraisFaux : public Question {

public:
	QuestionVraisFaux(std::string question, bool reponse)
	{
		mQuestion = question;
		mReponse = reponse;
	}
	~QuestionVraisFaux() override = default;
	void affichageInstruction() override {
		std::cout << "/nRepondez en inscrivant 'vrais' ou 'faux' / 'v' ou 'f' ";
	}
private:
	bool mReponse = false;
};