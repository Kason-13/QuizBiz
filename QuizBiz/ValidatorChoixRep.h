#pragma once
#include "Validator.h"
#include <string>

class ValidatorChoixRep : public Validator {
public:
	ValidatorChoixRep(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorChoixRep() override = default;
	void setReponse(int indexRep)
	{
		mReponse = indexRep;
	}
	void setNumberOfOptions(int newContrainte){
		verifMax = newContrainte;
	}

	//overriden methods from Validator class
	bool validate() override {
		int userAnswerInt = std::stoi(mUserAnswer);
		if (userAnswerInt == 0 || userAnswerInt < verifMax)
			return false;
		return true;
	}
	bool verifierReponse() override {
		if (std::stoi(mUserAnswer) == mReponse)
			return true;
		return false;
	}

private:
	int mReponse = 0;
	int verifMax = 0;
};