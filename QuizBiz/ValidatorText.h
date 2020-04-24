#pragma once
#include "Validator.h"
#include <string>

class ValidatorText : public Validator {
public:
	ValidatorText(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorText() override = default;

	void setReponse(std::string reponseText) {
		mReponse = reponseText;
	}

	void setContraintes(int min, int max) {
		minLenght = min;
		maxLength = max;
	}

	bool validate() override {
		int sizeOfAnswer = mReponse.size();
		if (sizeOfAnswer<minLenght || sizeOfAnswer>maxLength)
			return false;
		return true;
	}

	// to finish
	bool verifierReponse() override {
		
	}

private:
	std::string mReponse;
	int minLenght = 0;
	int maxLength = 0;
};