#pragma once
#include "Validator.h"
#include <string>
#include <ctype.h>

class ValidatorVraisFaux : public Validator {

public:
	ValidatorVraisFaux(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorVraisFaux() override = default;

	void setReponse(bool reponse) {
		mReponse = reponse;
	}

	bool validate() override {
		repMaj = toupper(mUserAnswer.at(0));
		if (repMaj == 'V' || repMaj == 'F')
			return true;
		return false;
	}

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
	bool mReponse;
	char repMaj;
};