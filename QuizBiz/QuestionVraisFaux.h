#pragma once
#include "Question.h" 
#include <vector>
#include <string>

class QuestionVraisFaux : public Question {

public:
	QuestionVraisFaux(std::string question, bool reponse)
	{
		mQuestion = question;
		response = reponse;
	}
	bool response = false;
};