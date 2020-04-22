#pragma once
#include "Question.h"
#include <string>

class QuestionText : public Question {

public:
	QuestionText(std::string question, std::string reponse,int minLengthContrainte,int maxLengthContrainte)
	{
		mQuestion = question;
		mReponse = reponse;
		mMinLengthContrainte = minLengthContrainte;
		mMaxLengthContrainte = maxLengthContrainte;
	}
	~QuestionText() override = default;
	void affichageInstruction() override {
		std::cout << "repondez avec une reponse entre " << mMinLengthContrainte << " et " << mMaxLengthContrainte << " characteres.";
	};
private:
	std::string mReponse = "";
	int mMinLengthContrainte = 0;
	int mMaxLengthContrainte = 0;
};