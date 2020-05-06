#pragma once
#include "Question.h"
#include <string>
#include "ValidatorNumerique.h"

class QuestionNumerique : public Question
{
public:
	QuestionNumerique(std::string question,bool chiffreRond,float reponse, int points)
		:Question(new ValidatorNumerique)
	{
		mQuestion = question;
		mEntier = chiffreRond;
		mReponse = reponse;
		mPoints = points;
	}
	~QuestionNumerique() override = default;


	//overrides
	int getPoint() override {
		return mPoints;
	}

	void setReponse() override {
		((ValidatorNumerique*)mValidator)->setReponse(mReponse);
	}

	void affichageInstruction() override {
		std::cout << "\nEntrez votre reponse en valeur numerique.\n";
	}
private:
	bool mEntier;
	float mReponse = 0;
	int mPoints = 0;
};