#pragma once
#include "Question.h"
#include <string>
#include "ValidatorText.h"

class QuestionText : public Question {

public:
	QuestionText(std::string question, std::string reponse,int minLengthContrainte,int maxLengthContrainte, int points)
		:Question(new ValidatorText)
	{
		mQuestion = question;
		mReponse = reponse;
		mMinLengthContrainte = minLengthContrainte;
		mMaxLengthContrainte = maxLengthContrainte;
		mPoints = points;
	}
	~QuestionText() override = default;

	// overrides
	int getPoint() override {
		return mPoints;
	}

	void setReponse() override {
		((ValidatorText*)mValidator)->setReponse(mReponse);
		((ValidatorText*)mValidator)->setContraintes(mMinLengthContrainte, mMaxLengthContrainte);
	}

	void affichageInstruction() override {
		std::cout << "\nrepondez avec une reponse entre " << mMinLengthContrainte << " et " << mMaxLengthContrainte << " characteres.\n";
	}
private:
	std::string mReponse = "";
	int mMinLengthContrainte = 0;
	int mMaxLengthContrainte = 0;
	int mPoints = 0;
};