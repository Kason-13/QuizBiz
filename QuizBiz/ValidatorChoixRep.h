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

	//overriden methods de la classe validator
	//validation de si c'est un chiffre et si ca depasse pas le nombre d'option
	bool validate() override {
		if (!std::isdigit(mUserAnswer[0]))
			return false;
		int userAnswerInt = std::stoi(mUserAnswer);
		if (userAnswerInt == 0 || userAnswerInt > verifMax)
			return false;
		return true;
	}
	// pour verifier si c'est la bonne reponse
	bool verifierReponse() override {
		if (std::stoi(mUserAnswer) == mReponse)
			return true;
		return false;
	}

private:
	int mReponse = 0;
	int verifMax = 0;
};