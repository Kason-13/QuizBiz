#pragma once
#include "Validator.h"
#include <string>
#include <ctype.h>

class ValidatorVraisFaux : public Validator {

public:
	ValidatorVraisFaux() {}
	~ValidatorVraisFaux() override = default;

	void setReponse(bool reponse);

	//overriden methods from Validator class
	// verifie si la premire lettre est soit v ou f
	bool validate() override {
		repMaj = toupper(mUserAnswer.at(0));
		if (repMaj == 'V' || repMaj == 'F')
			return true;
		return false;
	}
	//verifie la reponse
	bool verifierReponse() override {
		switch (repMaj)
		{
		case 'V':
			if (mReponse)
				return true;
			break;
		case 'F':
			if (!mReponse)
				return true;
			break;
		}
		return false;
	}

private:
	bool mReponse; // reponse de la question
	char repMaj;
};