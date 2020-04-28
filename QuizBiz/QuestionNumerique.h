#pragma once
#include "Question.h"
#include <string>
#include "ValidatorNumerique.h"

class QuestionNumerique : public Question
{
public:
	QuestionNumerique(std::string question,bool chiffreRond,float reponse,ValidatorNumerique *validatorNumPtr) 
	{
		mQuestion = question;
		mEntier = chiffreRond;
		validator = validatorNumPtr;
		mReponse = reponse;
	}
	~QuestionNumerique() override = default;

	//overrides
	void setReponse() override {
		((ValidatorNumerique*)&validator)->setReponse(mReponse);
	}
	void affichageInstruction() override {
		std::cout << "Entrez votre reponse en valeur numerique.\n";
	}
private:
	bool mEntier;
	float mReponse = 0;
};