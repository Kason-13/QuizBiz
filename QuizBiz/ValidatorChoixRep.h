#pragma once
#include "Validator.h"
#include <string>
#include <cctype>

class ValidatorChoixRep : public Validator {
public:
	ValidatorChoixRep() {}
	~ValidatorChoixRep() override = default;

	void setReponse(int indexRep);

	void setNumberOfOptions(int newContrainte);

	//overriden methods from Validator class
	bool validate() override {
		if (!std::isdigit(mUserAnswer[0]))
			return false;
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