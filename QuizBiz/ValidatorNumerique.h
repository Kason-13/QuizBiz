#pragma once
#include "Validator.h"
#include <string>
#include <cctype>

class ValidatorNumerique : public Validator{
public:
	ValidatorNumerique(std::string userAnswer) {
		mUserAnswer = userAnswer;
	}
	~ValidatorNumerique() override = default;

	void setReponse(float reponse) {
		mReponse = reponse;
	}

	bool isAIntOrFloat(){
		for (int index{}; index < mUserAnswer.length; ++index) {
			if (!std::isdigit(mUserAnswer.at(index)) && mUserAnswer.at(index) != '.')
				return false;
		}
		userResponse = std::stof(mUserAnswer);
		return true;
	}

	//overriden methods from Validator class
	bool validate() override{
		if (isAIntOrFloat())
			return true;
		return false;
	}

	bool verifierReponse() override {
		if (mReponse == userResponse) return true;
		return false;
	}
private:
	float mReponse = 0;
	float userResponse = 0;
};