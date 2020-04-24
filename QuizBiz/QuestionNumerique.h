#pragma once
#include "Question.h"
#include <string>

class QuestionNumerique : public Question
{
public:
	QuestionNumerique(std::string question,bool chiffreRond,float reponse) 
	{
		mQuestion = question;
		mEntier = chiffreRond;
	}
	~QuestionNumerique() override = default;
	void affichageInstruction() override {
		std::cout << "Entrez votre reponse en valeur numerique.\n";
	}
private:
	bool mEntier;
	float mReponse = 0;
};